#pragma once
#include "Building.h"
class House : public Building
{
private:
	int planta;
	int habitante;
	int servidor;
public:
	House(string _nombre, int _planta, int _habitante, int _servidor) : Building(_nombre), planta(_planta), habitante(_habitante), servidor(_servidor) {};
	void printHouse();
};