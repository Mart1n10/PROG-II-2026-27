#pragma once
#include "Character.h"
class Impostor : public Character
{
public:
	Impostor() : Character() {};
	Impostor(float _pos[2], string _name) : Character(_pos, _name) {};
	void Ability()override;
	void Interact()override;
	void Sabotage();
};


