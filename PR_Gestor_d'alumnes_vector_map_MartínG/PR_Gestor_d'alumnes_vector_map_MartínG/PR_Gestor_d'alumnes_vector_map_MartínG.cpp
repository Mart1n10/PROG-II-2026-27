#include <iostream>
#include <map>
#include <string>
#include "Alumne.h"
using namespace std;

int main()
{
    map<int, Alumne> alumnes;
    int opcio;

    do {
        cout << "\n--- MENU ---\n"
            << "1. Afegir alumne\n"
            << "2. Afegir nota\n"
            << "3. Veure mitjana\n"
            << "4. Llistar alumnes\n"
            << "0. Sortir\n"
            << "Opcio: ";
        cin >> opcio;

        if (opcio == 1) {
            int id;
            string nom, curs;
            cout << "Id: ";
            cin >> id;
            if (alumnes.count(id) == 1) {
                cout << "Ja existeix un alumne amb aquest id.\n";
            }
            else {
                cin.ignore();
                cout << "Nom: ";
                getline(cin, nom);
                cout << "Curs: ";
                getline(cin, curs);
                alumnes.insert({ id, Alumne(nom, curs) });
                cout << "Alumne afegit.\n";
            }
        }
        else if (opcio == 2) {
            int id;
            double nota;
            cout << "Id: ";
            cin >> id;
            if (alumnes.count(id) == 0) {
                cout << "Alumne no trobat.\n";
            }
            else {
                cout << "Nota: ";
                cin >> nota;
                alumnes.at(id).afegirNota(nota);
                cout << "Nota afegida.\n";
            }
        }
        else if (opcio == 3) {
            int id;
            cout << "Id: ";
            cin >> id;
            if (alumnes.count(id) == 0) {
                cout << "Alumne no trobat.\n";
            }
            else {
                cout << "Mitjana: " << alumnes.at(id).mitjana() << endl;
            }
        }
        else if (opcio == 4) {
            if (alumnes.empty()) {
                cout << "No hi ha alumnes.\n";
            }
            for (const auto& par : alumnes) {
                cout << "Id " << par.first << "\n";
                par.second.mostrar();
                cout << endl;
            }
        }
        else if (opcio != 0) {
            cout << "Opcio no valida.\n";
        }
    } while (opcio != 0);

    cout << "Adeu!\n";
    return 0;
}