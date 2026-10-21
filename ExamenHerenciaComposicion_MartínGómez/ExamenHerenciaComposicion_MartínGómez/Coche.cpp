#include "Coche.h"

Coche::Coche()
{
	numeroPuertas = 4;
}

int Coche::getNumeroPuertas()
{
	return numeroPuertas;
}

void Coche::mostrarInfoCoche()
{
	cout << "Marca: " + getMarca() << "Velocidad: " + getVelocidad() << "Numero de puertas: " + getNumeroPuertas() << endl;
}

void Coche::setNumeroPuertas()
{
	cin >> numeroPuertas;
}
