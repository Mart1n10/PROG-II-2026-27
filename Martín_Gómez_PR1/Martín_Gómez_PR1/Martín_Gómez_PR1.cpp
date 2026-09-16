#include <iostream>
#include "sJuego.h"

using namespace std;

int main() {
    // Las llaves {} inicializan las variables con los valores por defecto definidos en el .h
    sJuego j{};

    // ASIGNACIÓN DE DATOS: Como las variables son 'private', llamamos a los setters
    j.setNombre("Doom");
    j.setCreador("id Software");
    j.setLanzamiento(1993);
    j.setLenguaje("C");
    j.setPrecio(20.0f);

    // Mostramos la información inicial del juego
    j.visualizar_datos_juego();

    // Aplicamos los cambios requeridos llamando a los métodos de la clase
    j.hacer_descuento(25); // Resta el 25% al precio (pasa a ser 15 EUR)
    j.modificar_lanzamiento(1994); // Cambia el año a 1994
    j.visualizar_datos_juego(); // Muestra los datos actualizados

    // Modificaciones adicionales del flujo original
    j.modificar_lanzamiento(1978);
    j.setPrecio(-300);
    j.visualizar_datos_juego();

    return 0; // Finaliza la ejecución sin errores
}