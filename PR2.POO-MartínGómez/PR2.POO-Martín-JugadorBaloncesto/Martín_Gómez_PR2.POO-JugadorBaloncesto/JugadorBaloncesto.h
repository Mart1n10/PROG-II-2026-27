#pragma once
#include <string>
using namespace std;

class JugadorBaloncesto
{
private:
	string nombre = "Default";
	int altura = 0;
	int peso = 0;
	int edad = 0;
public:
	void Lanzar();
	void Saltar();
};

