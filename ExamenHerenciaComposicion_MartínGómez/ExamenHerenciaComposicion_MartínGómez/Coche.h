#pragma once
#include "Vehiculo.h"
class Coche : public Vehiculo
{
private:
	int numeroPuertas;
public:
	Coche();
	Coche(int _numeroPuertas) : numeroPuertas(_numeroPuertas) {}
	
	int getNumeroPuertas();
	void mostrarInfoCoche();

	void setNumeroPuertas();
};