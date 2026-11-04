#pragma once
#include "Cohete.h"
#include <cmath> // Para std::abs

class MapController {
private:
    Cohete* mapa[10][10]; // Entorno array 10x10 que pide el PDF
    Cohete* n1;
    Cohete* n2;
    int x1, y1;
    int x2, y2;
public:
    MapController(Cohete* nave1, Cohete* nave2);
    void Mover(int idNave, int nuevoX, int nuevoY);
    bool EstanCerca();
};