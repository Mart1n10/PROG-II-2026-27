#pragma once
class Capsula
{
private:
	double energia;
	double capacidadMaxima;
public:
	Capsula();
	Capsula(double capacidad);

	double ObtenerEnergia();
	double ObtenerEspacioLibre();

	void Cargar(double cantidad);
	bool Consumir(double cantidad);
};