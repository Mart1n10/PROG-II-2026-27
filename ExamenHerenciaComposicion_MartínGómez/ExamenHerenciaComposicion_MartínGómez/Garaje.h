#pragma once
#include "Vehiculo.h"

class Garaje
{
private:
	Vehiculo vehiculo;
public:
	Garaje();
	Garaje(Vehiculo _vehiculo) : vehiculo(_vehiculo) {}
	
	void modificarVehiculo();
	void mostrarVehiculo();
};

