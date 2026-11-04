#include "MapController.h"

// Crea el tablero 10x10 y ubica a las dos naves
MapController::MapController(Cohete* nave1, Cohete* nave2) {
    n1 = nave1;
    n2 = nave2;
    x1 = 0; y1 = 0; // Nave 1 empieza en (0,0)
    x2 = 9; y2 = 9; // Nave 2 empieza en (9,9)

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            mapa[i][j] = nullptr;
        }
    }
    mapa[x1][y1] = n1;
    mapa[x2][y2] = n2;
}

// Mueve la nave y actualiza la matriz
void MapController::Mover(int idNave, int nuevoX, int nuevoY) {
    if (nuevoX < 0 || nuevoX > 9 || nuevoY < 0 || nuevoY > 9) return;

    if (idNave == 1) {
        mapa[x1][y1] = nullptr;
        x1 = nuevoX; y1 = nuevoY;
        mapa[x1][y1] = n1;
    }
    else if (idNave == 2) {
        mapa[x2][y2] = nullptr;
        x2 = nuevoX; y2 = nuevoY;
        mapa[x2][y2] = n2;
    }
}

// Devuelve 'true' si las coordenadas de ambas naves están pegadas
bool MapController::EstanCerca() {
    return (std::abs(x1 - x2) <= 1 && std::abs(y1 - y2) <= 1);
}