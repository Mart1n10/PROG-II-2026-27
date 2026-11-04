#include <iostream>
#include "Cohete.h"
#include "MapController.h"

using namespace std;

int main() {
    // Declara dos objetos de la clase cohete
    Cohete* cohete1 = new Cohete(1);
    Cohete* cohete2 = new Cohete(2);
    MapController mapa(cohete1, cohete2);

    int opcion = 0;
    while (opcion != 7) {
        cout << "\n--- MENU COHETES ---\n";
        cout << "1. Crear capsula y anadir a un cohete\n";
        cout << "2. Eliminar capsula\n";
        cout << "3. Transferir capsula entre cohetes\n";
        cout << "4. Cargar energia a un cohete\n";
        cout << "5. Determinar un destino para un cohete\n";
        cout << "6. Activar lanzamiento del cohete\n";
        cout << "7. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        int idC, pos;
        double valor;
        string destino;

        switch (opcion) {
        case 1:
            cout << "Cohete destino (1 o 2): ";
            cin >> idC;
            cout << "Capacidad de la capsula: ";
            cin >> valor;
            if (idC == 1) {
                cohete1->AgregarCap(new Capsula(valor));
            }
            else if (idC == 2) {
                cohete2->AgregarCap(new Capsula(valor));
            }
            cout << "Capsula anadida.\n";
            break;
        case 2:
            cout << "De que cohete (1 o 2)? ";
            cin >> idC;
            cout << "Posicion de la capsula (0-9): ";
            cin >> pos;
            if (idC == 1) { 
                cohete1->EliminarCap(pos); 
            }
            else if (idC == 2) {
                cohete2->EliminarCap(pos);
            }
            cout << "Capsula eliminada (energia re-distribuida).\n";
            break;
        case 3:
            if (mapa.EstanCerca()) {
                cout << "Cohete origen (1 o 2): "; 
                cin >> idC;
                cout << "Posicion de la capsula (0-9): "; 
                cin >> pos;
                if (idC == 1) {
                    cohete1->TransferirCap(pos, cohete2);
                }
                else {
                    cohete2->TransferirCap(pos, cohete1);
                }
                cout << "Transferencia realizada.\n";
            }
            else {
                cout << "Los cohetes estan demasiado lejos en el mapa para transferir.\n";
                cout << "Moviendo el Cohete 2 al lado del Cohete 1 automaticamente para futuras pruebas...\n";
                mapa.Mover(2, 0, 1);
            }
            break;
        case 4:
            cout << "Cohete (1 o 2): "; 
            cin >> idC;
            cout << "Cantidad de energia: "; 
            cin >> valor;
            if (idC == 1) {
                cohete1->Cargar(valor);
            }
            else if (idC == 2) {
                cohete2->Cargar(valor);
            }
            cout << "Energia cargada.\n";
            break;
        case 5:
            cout << "Cohete (1 o 2): "; 
            cin >> idC;
            cout << "Destino: "; 
            cin >> destino;
            cout << "Distancia (Km): "; 
            cin >> valor;
            if (idC == 1) {
                cohete1->Objetivo(destino, valor);
            }
            else if (idC == 2) {
                cohete2->Objetivo(destino, valor);
            }
            break;
        case 6:
            cout << "Cohete a lanzar (1 o 2): "; 
            cin >> idC;
            bool exito;
            if (idC == 1) {
                exito = cohete1->Viajar();
            }
            else {
                exito = cohete2->Viajar();
            }

            if (exito) {
                cout << "Lanzamiento y viaje completados con exito!\n";
            }
            else {
                cout << "Fallo el lanzamiento (sin energia suficiente o sin destino).\n";
            }
            break;
        }
    }

    delete cohete1;
    delete cohete2;
    return 0;
}