#include "nuci.hpp"

Nuci::Nuci() : cantitate(0), pret_100_grame(0){};

Nuci::Nuci(int cantitate, int pret_100_grame) : cantitate(cantitate), pret_100_grame(pret_100_grame){};

void Nuci::afisare()
{
    cout << "NUCI: " << endl;
    cout << "Cantitate(g): " << cantitate << endl;
    cout << "Pret per 100g: " << pret_100_grame << endl;
    cout << "Pret final-> " << PretFinal() << endl;
    cout << endl;
}

float Nuci::PretFinal()
{
    float pret_final;
    pret_final = (float)(cantitate)*(float)pret_100_grame/100;

    return pret_final;
}
bool Nuci::isPortocala()
{
    return false;
}
bool Nuci::isBanana()
{
    return false;
}
bool Nuci::isNuca()
{
    return true;
}
bool Nuci::isMorcov()
{
    return false;
}