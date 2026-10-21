#include <iostream>
using namespace std;

void sumaX(int* p, int n, int x);
void restaX(int* p, int n, int x);
void minimX(int* p, int n);
void muestraArray(const int* p, int n);

int main()
{
    int n;
    cout << "Introduce el tamano del array (n): ";
    cin >> n;

    // Reserva dinámica de memoria en el heap
    int* v = new int[n];

    cout << "Introduce " << n << " enteros:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(v + i);
    }

    cout << "\nArray original: ";
    muestraArray(v, n);

    minimX(v, n);

    int x;
    cout << "\nIntroduce un valor x para operar: ";
    cin >> x;

    sumaX(v, n, x);
    cout << "Despues de sumar " << x << ": ";
    muestraArray(v, n);

    restaX(v, n, x);
    cout << "Despues de restar " << x << " al resultado anterior: ";
    muestraArray(v, n);

    restaX(v, n, x);
    cout << "El número original, menos " << x << ": ";
    muestraArray(v, n);

    // Liberamos la memoria dinámica y asignamos nullptr por buena práctica
    delete[] v;
    v = nullptr;

    return 0;
}

void sumaX(int* p, int n, int x)
{
    for (int i = 0; i < n; i++) {
        *(p + i) += x;
    }
}

void restaX(int* p, int n, int x)
{
    for (int i = 0; i < n; i++) {
        *(p + i) -= x;
    }
}

void minimX(int* p, int n)
{
    if (n <= 0) return;

    // Acceso al primer elemento con *p (equivalente a *(p + 0))
    int minimo = *p;
    for (int i = 1; i < n; i++) {
        if (*(p + i) < minimo) {
            minimo = *(p + i);
        }
    }
    cout << "El valor minimo del array es: " << minimo << endl;
}

void muestraArray(const int* p, int n)
{
    for (int i = 0; i < n; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;
}