#include "Vehiculo.h"

Vehiculo::Vehiculo()
{
    marca = "Default";
    velocidad = 10;
}

int Vehiculo::acelerar()
{
    return (velocidad * 10);
}

void Vehiculo::mostrarInfo()
{
    cout << "Marca:" + getMarca() << "Velocidad" + getVelocidad() << endl;
}

string Vehiculo::getMarca()
{
    return string(marca);
}

int Vehiculo::getVelocidad()
{
    return velocidad;
}

void Vehiculo::setMarca()
{
    cin >> marca;
}

void Vehiculo::setVelocidad()
{
    cin >> velocidad;
}
