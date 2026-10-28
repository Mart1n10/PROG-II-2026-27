#include "string"
#pragma once
using namespace std;
class ObjInteractuable
{
public:
	float position[2];
	string name;
public:
	ObjInteractuable();
	ObjInteractuable(float _pos[2], string _name);
	float GetX();
	float GetY();
};

