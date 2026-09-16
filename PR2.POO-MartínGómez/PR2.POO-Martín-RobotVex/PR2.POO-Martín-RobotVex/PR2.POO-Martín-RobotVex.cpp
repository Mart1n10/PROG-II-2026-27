#include <iostream>
#include "RobotVex.h"
using namespace std;

int main()
{
	RobotVex robotV;

	robotV.AgregarRueda(0);
	robotV.ActivarElevador(0);
	robotV.ActivarAutonoma();
	cout << "Colision: " << robotV.Colision() << endl;
}