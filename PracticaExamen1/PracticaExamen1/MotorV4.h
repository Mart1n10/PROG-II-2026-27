#pragma once
#include "Motor.h"
class MotorV4 : public Motor
{
private:
	int numeroCilindros;
	bool turbo;
public:
	MotorV4();
	MotorV4(int _numeroCilindros, bool _turbo) : numeroCilindros(_numeroCilindros), turbo(_turbo);

	int getNumeroCilindros();
	bool getTurbo();

	void setNumeroCilindros();
	void setTurbo();

	void arrancar() override;
	void mostrarInfo() override;
};

