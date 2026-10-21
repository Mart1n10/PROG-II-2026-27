#pragma once
#include <iostream>
using namespace std;

class Motor
{
private:
	int estado;
	float porcentaje_degradacion;
public:
	//constructores (tienen el mismo nombre que la clase)
	Motor(); //por omison
	Motor(int _estado, float _porcentaje_degradacion) : estado(_estado), porcentaje_degradacion(_porcentaje_degradacion) {}; //por parametros
	void Acelerar(float porcentaje);
	void AjustarPorcentaje(float porcentaje);
	float GetDegradacion()const;
	void SetMotores(int _estado, int _porcentaje);
};