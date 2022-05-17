#pragma once
#include "ferma.hpp"

class Porci : public Ferma
{
    char *nume;
    int numar;
    char *mancare;
    int cantitate_mancare1;
    char *mancare2;
    int cantitate_mancare2;

public:
    Porci();
    Porci(const char *, int, const char *, int, const char*, int);

    void afisare();
    int GetNumar();
    int GetCantitate_mancare1();
    int GetCantitate_mancare2();
    int GetCantitate_mancare();
    char *GetNume();
    char *GetMancare();
    char *GetMancare2();

    ~Porci();
};
