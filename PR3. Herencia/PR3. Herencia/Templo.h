#pragma once
#include "Building.h"
class Templo : public Building
{
private:
	string dios;
	int sacerdote;
public:
	Templo(string _nombre, string _dios, int sacerdotes) : Building(_nombre), dios(_dios), sacerdote(sacerdotes) {};
	void printTemple();
};