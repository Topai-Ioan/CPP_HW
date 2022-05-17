#pragma once
#include "pisici.hpp"

class Pisici_Negre : public Pisici
{
private:
    unsigned int varsta;
    char *nume;
    char *descriere;
    bool vaccin;

public:
    Pisici_Negre();
    Pisici_Negre(int varsta, const char *nume, const char *descriere, bool vaccin);

    void Afisare();
    int GetVarsta();
    bool GetVaccin();
    char *GetCuloare();
    char *GetDescriere();
    char *GetNume();
    char *GetCategorieVarsta();

    ~Pisici_Negre();
};