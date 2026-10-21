#pragma once
#include "Coche.h"

class Motor : public Coche
{
private:
    float cilindrada;
    int potencia;
    string combustible;

public:
    Motor();
    Motor(float _cilindrada, int _potencia, string _combustible) : cilindrada(_cilindrada), potencia(_potencia), combustible(_combustible);
    float getCilindrada();
    int getPotencia();
    string getCombustible();

    void setCilindrada();
    void setPotencia();
    void setCombustible();

    virtual void arrancar();
    virtual void mostrarInfo();
};