#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

void IngresarAlumnos(map<string, vector<double>>* notas);
void IngresarNotas(vector<double>* alumno);

int main()
{
	map<string, vector<double>> notas;

	IngresarAlumnos(&notas);
	for (auto& a : notas) {
		IngresarNotas(&a.second);
	}

	for (auto& a : notas) {
		double suma = 0;
		for (double n : a.second) {
			suma += n;
		}
		cout << a.first << ": " << suma / a.second.size() << endl;
	}
}

void IngresarAlumnos(map<string, vector<double>>*notas)
{
	int numAlumnos;
	cout << "Dime cuantos alumnos tienes?" << endl;
	cin >> numAlumnos;

	string nombre;
	for (int i = 0; i < numAlumnos; i++) {
		cout << "Nombre: ";
	cin >> nombre;
		(*notas)[nombre] = vector<double>();
		}
	}

void IngresarNotas(vector<double>* alumno)
{
	cout << "\nDime cuantas notas tiene:" << endl;
	int notas;
	cin >> notas;
	int valor;

	for (int i = 0; i < notas; i++) {
		cout << "Dime su nota: ";
		cin >> valor;
		(*alumno).push_back(valor);
	}
}