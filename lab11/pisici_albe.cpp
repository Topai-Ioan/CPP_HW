#include "pisici_albe.hpp"

Pisici_Albe ::Pisici_Albe() : varsta(0), nume(NULL), descriere(NULL), vaccin(0) {}

Pisici_Albe ::Pisici_Albe(int varsta, const char *nume, const char *descriere, bool vaccin) : varsta(varsta), vaccin(vaccin)
{
    // this->varsta = varsta;
    // this->vaccin = vaccin;
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
    this->descriere = new char[strlen(descriere) + 1];
    strcpy(this->descriere, descriere);
}

void Pisici_Albe ::Afisare()
{
    std::cout << "Pisica Alba\n";
    std::cout << "Nume: " << nume << "\n";
    std::cout << "Descriere: " << descriere << "\n";
    std::cout << "Varsta: " << varsta << "\n";
    std::cout << "Vaccin: " << vaccin << "\n";
    std::cout << std::endl;
}
int Pisici_Albe ::GetVarsta() { return varsta; }

bool Pisici_Albe ::GetVaccin() { return vaccin; }

char *Pisici_Albe ::GetCuloare()
{
    return strdup("alba");
}
char *Pisici_Albe::GetDescriere() { return descriere; }

char *Pisici_Albe::GetNume()
{
    return nume;
}
char *Pisici_Albe ::GetCategorieVarsta()
{
    if (varsta <= 1)
    {
        char *aux = strdup("pui");
        return aux;
    }
    if (varsta > 1 && varsta <= 3)
    {
        char *aux = strdup("tanara");
        return aux;
    }
    if (varsta > 3)
    {
        char *aux = strdup("matura");
        return aux;
    }
}

Pisici_Albe::~Pisici_Albe()
{
    delete[] nume;
    delete[] descriere;
}