#pragma once
#include "Vehiculo.h"
class Moto : public Vehiculo
{
private:
	bool tieneCasco;
public:
	Moto();
	Moto(bool _tieneCasco) : tieneCasco(_tieneCasco) {}
	
	void mostrarInfoMoto();
	virtual void mostrar();
};

