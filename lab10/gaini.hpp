#pragma once
#include "ferma.hpp"

class Gaini : public Ferma
{
private:
    char *nume;
    int numar;
    char *mancare;
    int cantitate_mancare;

public:
    Gaini();
    Gaini(const char *, int, const char *, int);

    void afisare();
    int GetNumar();
    int GetCantitate_mancare();
    char *GetNume();
    char *GetMancare();

    ~Gaini();
};
