#include "Vex.h"

int main()
{
	Vex LordOfTheRings = Vex(Motor(1, 100), Motor(1, 75));
	int accion;
	do {
		cout << "Que accion va a hacer el robot?\n1.Acelerar 2.Mostrar Estado 3. Salir" << endl;
		cin >> accion;
		if (accion == 1) {
			LordOfTheRings.Acelerar(10);
		}
		else if(accion == 2) {
			LordOfTheRings.ModificarMotores();
		}
		else if(accion == 4){
			accion = -1;
		}
	} while (accion != -1);
}