#include "sJuego.h"

// strcpy_s(destino, tamaño_del_destino, origen): Copia texto de forma segura sin desbordar la memoria
void sJuego::setNombre(const char* n) {
    strcpy_s(nombre, sizeof(nombre), n);
}

void sJuego::setCreador(const char* c) {
    strcpy_s(creador, sizeof(creador), c);
}

void sJuego::setLanzamiento(int anyo) {
    lanzamiento = anyo; // Asigna el valor entero directamente
}

void sJuego::setLenguaje(const char* l) {
    strcpy_s(lenguaje, sizeof(lenguaje), l);
}

void sJuego::setPrecio(float p) {
    precio = p;
}

// IMPLEMENTACIÓN DE LOS MÉTODOS
// Muestra por pantalla los datos guardados en las variables privadas de la propia instancia
void sJuego::visualizar_datos_juego() const {
    cout << "-----------------------------" << endl;
    cout << "Nombre      : " << nombre << endl;
    cout << "Creador     : " << creador << endl;
    cout << "Lanzamiento : " << lanzamiento << endl;
    cout << "Lenguaje    : " << lenguaje << endl;
    cout << "Precio      : " << precio << " EUR" << endl;
}
// Modifica la variable privada 'lanzamiento' con el nuevo año
void sJuego::modificar_lanzamiento(int anyo) {
    lanzamiento = anyo;
}
// Aplica un porcentaje de descuento al precio actual
void sJuego::hacer_descuento(float desc) {
    precio = precio - (precio * desc / 100);
}