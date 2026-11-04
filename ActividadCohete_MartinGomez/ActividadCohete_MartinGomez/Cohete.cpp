#include "Cohete.h"
#include <algorithm> // Para usar std::min

Cohete::Cohete() {
    id = 0;
    destino = "";
    distancia = 0.0;
    cantidadCapsulas = 0;
    // Pone los 10 apuntadores a nulo indicando que los compartimentos están vacíos
    for (int i = 0; i < 10; i++) {
        capsulas[i] = nullptr;
    }
}

Cohete::Cohete(int _id) {
    id = _id;
    destino = "";
    distancia = 0.0;
    cantidadCapsulas = 0;
    for (int i = 0; i < 10; i++) {
        capsulas[i] = nullptr;
    }
}

Cohete::~Cohete() {
    for (int i = 0; i < 10; i++) {
        if (capsulas[i] != nullptr) {
            delete capsulas[i]; // Borra el objeto cápsula de la memoria
            capsulas[i] = nullptr;
        }
    }
}

double Cohete::EnergiaTotal() {
    double total = 0;
    for (int i = 0; i < 10; i++) {
        if (capsulas[i] != nullptr) {
            total += capsulas[i]->ObtenerEnergia();
        }
    }
    return total;
}

double Cohete::EnergiaNecesaria(double km) {
    return (km / 100000.0) * 10000.0; // 10.000KWh por cada 100.000 Km
}

void Cohete::AgregarCap(Capsula* cap) {
    if (cantidadCapsulas >= 10) return;
    for (int i = 0; i < 10; i++) {
        if (capsulas[i] == nullptr) { // Busca el primer hueco libre
            capsulas[i] = cap;
            cantidadCapsulas++;
            break;
        }
    }
}

void Cohete::EliminarCap(int posicion) {
    if (posicion >= 0 && posicion < 10 && capsulas[posicion] != nullptr) {
        double energiaSobrante = capsulas[posicion]->ObtenerEnergia();
        delete capsulas[posicion]; // Elimina la cápsula
        capsulas[posicion] = nullptr; // Deja el compartimento a nulo
        cantidadCapsulas--;
        Cargar(energiaSobrante); // Reparte la energía a las demás cápsulas
    }
}

void Cohete::TransferirCap(int posicion, Cohete* otro) {
    if (posicion >= 0 && posicion < 10 && capsulas[posicion] != nullptr) {
        otro->AgregarCap(capsulas[posicion]); // El otro cohete guarda el apuntador
        capsulas[posicion] = nullptr; // Este cohete pierde el apuntador
        cantidadCapsulas--;
    }
}

bool Cohete::ValidarViaje(double distanciaViaje) {
    return EnergiaTotal() >= EnergiaNecesaria(distanciaViaje);
}

void Cohete::Objetivo(string nuevoDestino, double nuevaDistancia) {
    destino = nuevoDestino;
    distancia = nuevaDistancia;
}

bool Cohete::Viajar() {
    if (destino == "" || distancia <= 0) return false;
    double energiaRequerida = EnergiaNecesaria(distancia);

    if (!ValidarViaje(distancia)) return false;

    // Va consumiendo la energía necesaria cápsula por cápsula
    for (int i = 0; i < 10 && energiaRequerida > 0; i++) {
        if (capsulas[i] != nullptr) {
            double disponible = capsulas[i]->ObtenerEnergia();
            double aConsumir = std::min(disponible, energiaRequerida);
            capsulas[i]->Consumir(aConsumir);
            energiaRequerida -= aConsumir;
        }
    }
    return true;
}

void Cohete::Cargar(double cantidad) {
    double energiaRestante = cantidad;
    // Va llenando las cápsulas con la energía hasta que no quede más por cargar
    for (int i = 0; i < 10 && energiaRestante > 0; i++) {
        if (capsulas[i] != nullptr) {
            double espacioLibre = capsulas[i]->ObtenerEspacioLibre();
            double aCargar = std::min(espacioLibre, energiaRestante);
            capsulas[i]->Cargar(aCargar);
            energiaRestante -= aCargar;
        }
    }
}