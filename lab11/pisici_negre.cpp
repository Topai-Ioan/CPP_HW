#include "pisici_negre.hpp"

Pisici_Negre ::Pisici_Negre() : varsta(0), nume(NULL), descriere(NULL), vaccin(0) {}

Pisici_Negre ::Pisici_Negre(int varsta, const char *nume, const char *descriere, bool vaccin) : varsta(varsta), vaccin(vaccin)
{
    // this->varsta = varsta;
    // this->vaccin = vaccin;
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
    this->descriere = new char[strlen(descriere) + 1];
    strcpy(this->descriere, descriere);
}
void Pisici_Negre ::Afisare()
{
    std::cout << "Pisica Neagra\n";
    std::cout << "Nume: " << nume << "\n";
    std::cout << "Descriere: " << descriere << "\n";
    std::cout << "Varsta: " << varsta << "\n";
    std::cout << "Vaccin: " << vaccin << "\n";
    std::cout << std::endl;
}
int Pisici_Negre ::GetVarsta()
{
    return varsta;
}
bool Pisici_Negre ::GetVaccin()
{
    return vaccin;
}
char *Pisici_Negre ::GetCuloare()
{
    char *aux = strdup("neagra");
    return aux;
}
char *Pisici_Negre::GetDescriere()
{
    return descriere;
}
char *Pisici_Negre::GetNume()
{
    return nume;
}
char *Pisici_Negre ::GetCategorieVarsta()
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

Pisici_Negre::~Pisici_Negre()
{
    delete[] nume;
    delete[] descriere;
}