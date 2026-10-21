#pragma once
#include <string>
#include <iostream>
using namespace std;

class Building
{
protected:
	string nombre = "East Warehouse";
public:
	Building(string _nombre) : nombre(_nombre) {};
	string getName();
};

