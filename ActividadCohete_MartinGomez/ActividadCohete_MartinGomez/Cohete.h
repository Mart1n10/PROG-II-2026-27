#pragma once
#include <string>
#include "Capsula.h"
using namespace std;

class Cohete
{
private:
	int id;
	string destino;
	double distancia;
	Capsula* capsulas[10]; // El array de 10 apuntadores que pide el PDF
	int cantidadCapsulas;

	double EnergiaTotal();
	double EnergiaNecesaria(double km);
public:
	Cohete();
	Cohete(int _id);
	~Cohete();

	void AgregarCap(Capsula* cap);
	void EliminarCap(int posicion);
	void TransferirCap(int posicion, Cohete* otro);

	bool ValidarViaje(double distanciaViaje);
	void Objetivo(string nuevoDestino, double nuevaDistancia);
	bool Viajar();
	void Cargar(double cantidad);
};