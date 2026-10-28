#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream> // ejercicio5
using namespace std;

//Ejercicio 1: Declaracion e inicializacion
/*
int main() {
	vector <int> numeros = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < numeros.size(); i++) {
		cout << numeros[i] << " ";
	}
}
*/

//Ejercicio 2: Inserción y Eliminación
/*
int main() {
	vector<string> nCiudades;
	int n = 0;
	cout << "Cuantas ciudades quieres introducir? " << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string ciudad;
		cout << "Introduce el nombre de la ciudad " << i + 1 << ":" << endl;
		cin >> ciudad;
		nCiudades.push_back(ciudad);
	}
	nCiudades.pop_back();
	cout << "\nUltima ciudad ELIMINADA" << endl;
	cout << "\nCiudades introducidas:" << endl;
	for (int i = 0; i < nCiudades.size(); i++) {
		cout << "Ciudad numero " << i + 1 << ": " << nCiudades[i] << "\n";
	}
}
*/

//Ejercicio 3: Recorrido y Modificación
/*
int main() {
	vector<int> numerosM = { 1, 2, 3, 4, 5 };
	cout << "Valores * 2 = ";
	for (int i = 0; i < numerosM.size(); i++) {
		numerosM[i] = numerosM[i] * 2;
		cout << numerosM[i] << " ";
	}
}
*/

//Ejercicio 4: Uso de Funciones Avanzadas
/*
int main() {
	vector<int> numerosO(5);
	cout << "Introduce 5 numeros: " << endl;
	for (int i = 0; i < 5; i++) {
		cin >> numerosO[i];
	}
	sort(numerosO.begin(), numerosO.end());
	for (int i = 0; i < 5; i++) {
		cout << numerosO[i] << " ";
	}
}
*/

//Ejercicio 5: Aplicación Completa: Búsqueda y Contador de Palabras
/*
int main() {
	vector<string> palabras;
	string frase;
	string palabra;
	string buscar;
	int contador = 0;

	cout << "Introduce una lista de palabras separadas por espacios:" << endl;
	getline(cin, frase); //lee toda la línea, incluidos los espacios.

	stringstream ss(frase); //permite leer el contenido de esa línea palabra por palabra.

	while (ss >> palabra) { //extrae cada palabra hasta que no quedan más.
		palabras.push_back(palabra);
	}

	cout << "Que palabra quieres buscar?" << endl;
	cin >> buscar;

	for (int i = 0; i < palabras.size(); i++) {
		if (palabras[i] == buscar) {
			contador++;
		}
	}

	cout << "La palabra " << buscar << " aparece " << contador << " veces." << endl;
}
*/