#include "pisici_colorate.hpp"

Pisici_Colorate ::Pisici_Colorate() : varsta(0), nume(NULL), descriere(NULL), vaccin(0) {}

Pisici_Colorate ::Pisici_Colorate(int varsta, const char *nume, const char *descriere, bool vaccin) : varsta(varsta), vaccin(vaccin)
{
    // this->varsta = varsta;
    // this->vaccin = vaccin;
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
    this->descriere = new char[strlen(descriere) + 1];
    strcpy(this->descriere, descriere);
}
void Pisici_Colorate ::Afisare()
{
    std::cout << "Pisica Colorata\n";
    std::cout << "Nume: " << nume << "\n";
    std::cout << "Descriere: " << descriere << "\n";
    std::cout << "Varsta: " << varsta << "\n";
    std::cout << "Vaccin: " << vaccin << "\n";
    std::cout << std::endl;
}
int Pisici_Colorate ::GetVarsta()
{
    return varsta;
}
bool Pisici_Colorate ::GetVaccin()
{
    return vaccin;
}
char *Pisici_Colorate ::GetCuloare()
{
    char *aux = strdup("colorata");
    return aux;
}
char *Pisici_Colorate::GetDescriere()
{
    return descriere;
}
char *Pisici_Colorate::GetNume()
{
    return nume;
}
char *Pisici_Colorate ::GetCategorieVarsta()
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

Pisici_Colorate::~Pisici_Colorate()
{
    delete[] nume;
    delete[] descriere;
}