#include "Banana.hpp"

Banana::Banana() : pret_bucata(0) {}

Banana::Banana(int pret_bucata) : pret_bucata(pret_bucata){}

void Banana::afisare()
{
    cout << "Banana: " << endl;
    cout << "Cantitate(buc):  " << 1 << endl;
    cout << "Pret per kg: " << pret_bucata << endl;
    cout << "Pret final-> " << PretFinal() << endl;
    cout << endl;
}

float Banana::PretFinal()
{
    float pret_final;
    pret_final = (float)(pret_bucata) * 1;

    return pret_final;
}
bool Banana:: isPortocala()
{
    return false;
}
bool Banana::isBanana()
{
    return true;
}
bool Banana::isNuca()
{
    return false;
}
bool Banana::isMorcov()
{
    return false;
}