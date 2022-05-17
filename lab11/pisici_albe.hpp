#pragma once
#include "pisici.hpp"

class Pisici_Albe : public Pisici
{
private:
    unsigned int varsta;
    char *nume;
    char *descriere;
    bool vaccin;

public:
    Pisici_Albe();
    Pisici_Albe(int varsta, const char * nume, const char *descriere, bool vaccin);

    void Afisare();
    int GetVarsta();
    bool GetVaccin();
    char *GetCuloare();
    char *GetDescriere();
    char *GetNume();
    char *GetCategorieVarsta();

    ~Pisici_Albe();
};