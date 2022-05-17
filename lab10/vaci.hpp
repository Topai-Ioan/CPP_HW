#pragma once
#include "ferma.hpp"

class Vaci : public Ferma
{
private:
    char *nume;
    int numar;
    char *mancare;
    int cantitate_mancare;

public:
    Vaci();
    Vaci(const char *, int, const char *, int);

    void afisare();
    int GetNumar();
    int GetCantitate_mancare();
    char* GetNume();
    char* GetMancare();

    ~Vaci();
};
