#include "portocale.hpp"

Portocale::Portocale() : nr_kilograme(0), pret_kg(0) {}

Portocale::Portocale(int nr_kilograme, int pret_kg) : nr_kilograme(nr_kilograme), pret_kg(pret_kg) {}

void Portocale::afisare()
{
    cout << "Portocale: " << endl;
    cout << "Cantitate(kg):  " << nr_kilograme << endl;
    cout << "Pret per kg: " << pret_kg << endl;
    cout << "Pret final-> " << PretFinal() << endl;
    cout << endl;
}

float Portocale::PretFinal()
{
    float pret_final;
    pret_final = (float)nr_kilograme * (float)pret_kg;

    return pret_final;
}
bool Portocale::isPortocala()
{
    return true;
}
bool Portocale::isBanana()
{
    return false;
}
bool Portocale::isNuca()
{
    return false;
}
bool Portocale::isMorcov()
{
    return false;
}
