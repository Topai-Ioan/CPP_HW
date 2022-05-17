#pragma once
#include "ferma.hpp"

class Cai : public Ferma
{
    char *nume;
    int numar;
    char *mancare;
    int cantitate_mancare;

public:
    Cai();
    Cai(const char*, int, const char*, int);

    void afisare();
    int GetNumar();
    int GetCantitate_mancare();
    char *GetNume();
    char *GetMancare();

    ~Cai();
};
