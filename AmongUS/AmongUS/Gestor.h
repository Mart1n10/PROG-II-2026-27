#include "Impostor.h"
#include "ObjInteractuable.h"
#include <vector>
#pragma once

class Gestor
{
private:
	Character *characters[3];
	ObjInteractuable obj[3];
public:
	Gestor();
	float GetPosPlayerX(int i);
	float GetPosPlayerY(int i);

	float GetPosObjectX(int i);
	float GetPosObjectY(int i);
};