#include "ObjInteractuable.h"

ObjInteractuable::ObjInteractuable()
{
	position[0] = 0;
	position[1] = 0;
	name = "Default";
}

ObjInteractuable::ObjInteractuable(float _pos[2], string _name)
{
	position[0] = _pos[0];
	position[1] = _pos[1];
	name = _name;
}

float ObjInteractuable::GetX()
{
	return position[0];
}

float ObjInteractuable::GetY()
{
	return position[1];
}
