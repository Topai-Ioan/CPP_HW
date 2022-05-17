#pragma once
#include "pisici.hpp"

class Pisici_Colorate : public Pisici
{
private:
    unsigned int varsta;
    char *nume;
    char *descriere;
    bool vaccin;

public:
    Pisici_Colorate();
    Pisici_Colorate(int varsta, const char *nume, const char *descriere, bool vaccin);

    void Afisare();
    int GetVarsta();
    bool GetVaccin();
    char *GetCuloare();
    char *GetDescriere();
    char *GetNume();
    char *GetCategorieVarsta();

    ~Pisici_Colorate();
};