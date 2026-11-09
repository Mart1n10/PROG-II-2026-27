#pragma once
#include <string>
#include <vector>

class Alumne
{
private:
	std::string nom;
	std::string curs;
	std::vector<double> notes;

public:
	Alumne();
	Alumne(std::string _nom, std::string _curs) : nom(_nom), curs(_curs) {}

	void afegirNota(double nota);
	double mitjana() const;
	void mostrar() const;
};
