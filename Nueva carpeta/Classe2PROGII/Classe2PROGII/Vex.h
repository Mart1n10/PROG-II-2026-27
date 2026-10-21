#pragma once
#include "Motor.h"
class Vex
{
private:
	Motor motoresDelante;
	Motor motoresDetras;
public:
	Vex();
	Vex(Motor _motoresDelante, Motor _motoresDetras) : motoresDelante(_motoresDelante), motoresDetras(_motoresDetras) {};
	void Acelerar(float porcentaje);
	void MostrarEstadoDelRobot();
	void ModificarMotores(int posicion, int estado, int porcentaje);
};