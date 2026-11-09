#include "Alumne.h"
#include <iostream>
using namespace std;

Alumne::Alumne()
{
	nom = "Sense nom";
	curs = "Sense curs";
}

void Alumne::afegirNota(double nota)
{
	notes.push_back(nota);
}

double Alumne::mitjana() const
{
	if (notes.empty()) {
		return 0;
	}
	double suma = 0;
	for (double n : notes) {
		suma += n;
	}
	return suma / notes.size();
}

void Alumne::mostrar() const
{
	cout << "Nom: " << nom << "\nCurs: " << curs << "\nNotes: ";
	for (double n : notes) {
		cout << n << " ";
	}
	cout << endl;
}
