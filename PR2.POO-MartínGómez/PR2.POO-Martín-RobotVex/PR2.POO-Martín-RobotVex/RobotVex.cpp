#include "RobotVex.h"
#include <iostream>
using namespace std;

void RobotVex::AgregarRueda(int num)
{
	cout << "Se ha agregado la rueda" << endl;
}

void RobotVex::ActivarElevador(int motornum)
{
	cout << "Elevador activado" << endl;
}

void RobotVex::ActivarAutonoma()
{
	cout << "Autonoma activada" << endl;
}

bool RobotVex::Colision()
{
	return false;
}
