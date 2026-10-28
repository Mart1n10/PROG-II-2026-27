#include "Character.h"

Character::Character()
{
	position[0] = 0;
	position[1] = 0;
	name = "Default";
}

Character::Character(float _pos[2], string _name)
{
	position[0] = _pos[0];
	position[1] = _pos[1];
	name = _name;
}

void Character::Interact()
{
	cout << "Observando si hay un objeto a interactuar\n";
}

void Character::Ability()
{
	cout << "Tripulante no actua\n";
}

void Character::MoveX(float pos)
{
	position[0] += pos;
}

void Character::MoveY(float pos)
{
	position[1] += pos;
}

float Character::GetX()
{
	return position[0];
}

float Character::GetY()
{
	return position[1];
}

void Character::SetGestor(Gestor* _gestor)
{
	*gestor = *_gestor;
}
