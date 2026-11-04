#include "Capsula.h"

Capsula::Capsula()
{
	energia = 0;
	capacidadMaxima = 20000;
}

Capsula::Capsula(double capacidad)
{
	energia = 0;
	if (capacidad > 0) {
		capacidadMaxima = capacidad;
	}
	else {
		capacidadMaxima = 20000;
	}
}

double Capsula::ObtenerEnergia()
{
	return energia;
}

double Capsula::ObtenerEspacioLibre()
{
	return capacidadMaxima - energia;
}

void Capsula::Cargar(double cantidad)
{
	if (cantidad <= 0) {
		return;
	}

	double espacioLibre = capacidadMaxima - energia;

	if (cantidad > espacioLibre) {
		energia = capacidadMaxima; // si intentamos cargar mas energia de la que cabe, se llena al maximo
	}
	else {
		energia += cantidad; // si no, suma la cantidad a la que ya habia
	}
}

bool Capsula::Consumir(double cantidad)
{
	if (cantidad < 0 || cantidad > energia) {
		return false;
	}

	energia -= cantidad;
	return true;
}
