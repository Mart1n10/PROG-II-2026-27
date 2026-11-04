#include "Capsula.h"

// Constructor por defecto: inicializa a 0 energía y capacidad base de 20000
Capsula::Capsula()
{
	energia = 0;
	capacidadMaxima = 20000;
}

// Constructor con parámetro: define la capacidad máxima personalizada
Capsula::Capsula(double capacidad)
{
	energia = 0;
	if (capacidad > 0) {
		capacidadMaxima = capacidad;
	}
	else {
		capacidadMaxima = 20000; // Valor por defecto si introducen un negativo
	}
}

// Devuelve la energía actual
double Capsula::ObtenerEnergia()
{
	return energia;
}

// Calcula cuánto le falta para llenarse
double Capsula::ObtenerEspacioLibre()
{
	return capacidadMaxima - energia;
}

// Añade energía sin pasarse de la capacidad máxima
void Capsula::Cargar(double cantidad)
{
	if (cantidad <= 0) {
		return;
	}
	double espacioLibre = capacidadMaxima - energia;
	if (cantidad > espacioLibre) {
		energia = capacidadMaxima; // Si intentamos cargar más de la que cabe, se llena al máximo
	}
	else {
		energia += cantidad; // Si cabe entera, suma la cantidad
	}
}

// Resta energía para los viajes
bool Capsula::Consumir(double cantidad)
{
	if (cantidad < 0 || cantidad > energia) {
		return false; // Falla si pides más de lo que hay
	}
	energia -= cantidad;
	return true;
}