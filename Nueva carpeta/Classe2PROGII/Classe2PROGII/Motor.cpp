#include "Motor.h"

Motor::Motor()
{
	estado = 1;
	porcentaje_degradacion = 0;
}

void Motor::Acelerar(float porcentaje)
{
	cout << "Acelerando un " << porcentaje << "%" << endl;
	AjustarPorcentaje(porcentaje);
}

void Motor::AjustarPorcentaje(float porcentaje)
{
	float resultado = porcentaje * 0.2;
	porcentaje_degradacion = porcentaje_degradacion - resultado;
}

float Motor::GetDegradacion() const
{
	return porcentaje_degradacion;
}

void Motor::SetMotores(int _estado, int _porcentaje)
{
	estado = _estado;
	porcentaje_degradacion = _porcentaje;
}
