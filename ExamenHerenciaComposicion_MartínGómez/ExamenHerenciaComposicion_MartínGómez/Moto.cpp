#include "Moto.h"

Moto::Moto()
{
	tieneCasco = false;
}

void Moto::mostrarInfoMoto()
{
	cout << "Marca:" + getMarca() << "Velocidad" + getVelocidad() << "Tiene casco? " + tieneCasco << endl;
}

void Moto::mostrar()
{
	cout << "Buenas tardes" << endl;
}
