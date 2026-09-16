#pragma once
#include <string>
using namespace std;

class RobotVex
{
private:
	int ruedas = 0;
	int motores = 0;
	int piston = 0;
	string nombre = "Default";
	int velocidad = 0;
public:
	void AgregarRueda(int num);
	void ActivarElevador(int motornum);
	void ActivarAutonoma();
	bool Colision();
};