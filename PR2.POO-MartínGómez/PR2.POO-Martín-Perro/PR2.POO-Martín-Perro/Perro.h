#pragma once
#include <string>
using namespace std;

class Perro
{
private:
	string nombre = "default";
	int edad = 0;
	int peso = 0;
	int altura = 0;
public:
	void Correr();
	void Dormir();
};