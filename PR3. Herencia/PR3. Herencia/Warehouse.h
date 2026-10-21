#pragma once
#include "Building.h"
class Warehouse : public Building
{
private:
	int madera;
	int roca;
	int trigo;
public:
	Warehouse(string _nombre, int _madera, int _roca, int _trigo) : Building(_nombre), madera(_madera), roca(_roca), trigo(_trigo) {};
	void printResources();
};

