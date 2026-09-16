#pragma once
#include <string>

using namespace std;
class Coche
{
private:
	string marca = "Default";
	string modelo = "Default";
	int anio_matricula;
	int potencia;
public:
	void Acelerar();
	void Frenar();
	void Girar();
};