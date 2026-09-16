#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class sJuego {
private:
    char nombre[30];
    char creador[30];
    int lanzamiento = 0;
    char lenguaje[10];
    float precio = 0.0f;

public:
    // SETTERS: Métodos públicos que permiten asignar valores a los datos private desde fuera
    void setNombre(const char* n);
    void setCreador(const char* c);
    void setLanzamiento(int anyo);
    void setLenguaje(const char* l);
    void setPrecio(float p);

    // MÉTODOS MIEMBROS: Funciones que operan con los datos del objeto
    // 'const' indica que esta función solo lee datos, no los modifica
    void visualizar_datos_juego() const;
    void modificar_lanzamiento(int anyo);
    void hacer_descuento(float desc);
};