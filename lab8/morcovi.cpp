#include "morcovi.hpp"

Morcovi::Morcovi() : cantitate(0), pret_100_grame(0){}

Morcovi::Morcovi(int cantitate, int pret_100_grame) : cantitate(cantitate), pret_100_grame(pret_100_grame){}

void Morcovi::afisare()
{
    cout << "Morcovi: " << endl;
    cout << "Cantitate(g): " << cantitate << endl;
    cout << "Pret per 100g: " << pret_100_grame << endl;
    cout << "Pret final-> " << PretFinal() << endl;
    cout << endl;
}

float Morcovi::PretFinal()
{
    float pret_final;
    pret_final = (float)(cantitate) * (float)pret_100_grame / 100;

    return pret_final;
}
bool Morcovi::isPortocala()
{
    return false;
}
bool Morcovi::isBanana()
{
    return false;
}
bool Morcovi::isNuca()
{
    return false;
}
bool Morcovi::isMorcov()
{
    return true;
}