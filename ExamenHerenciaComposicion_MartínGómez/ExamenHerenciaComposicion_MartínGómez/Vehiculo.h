#pragma once
#include <iostream>
using namespace std;

class Vehiculo
{
private:
	string marca;
	int velocidad;
public:
	Vehiculo();
	Vehiculo(string _marca, int _velocidad) : marca(_marca), velocidad(_velocidad) {}
	int acelerar();
	void mostrarInfo();
	
	string getMarca();
	int getVelocidad();

	void setMarca();
	void setVelocidad();
};

