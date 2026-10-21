#include "Vex.h"

Vex::Vex()
{
	motoresDelante = Motor();
	motoresDetras = Motor();
}

void Vex::Acelerar(float porcentaje)
{
	motoresDelante.Acelerar(porcentaje);
	motoresDetras.Acelerar(porcentaje);
}

void Vex::MostrarEstadoDelRobot()
{
	cout << "Motores de delante : " << motoresDelante.GetDegradacion() << endl;
	cout << "Motores de detras : " << motoresDetras.GetDegradacion() << endl;
}

void Vex::ModificarMotores(int posicion, int estado, int porcentaje)
{
	if (posicion == 0) {
		motoresDelante.SetMotores(estado, porcentaje);
	}
}