#include "Gaini.hpp"

Gaini::Gaini() : nume(NULL), numar(0), mancare(NULL), cantitate_mancare(0) {}

Gaini::Gaini(const char *nume, int numar, const char *mancare, int cantitate_mancare)
{
    this->numar = numar;
    this->cantitate_mancare = cantitate_mancare;

    this->nume = new char(strlen(nume) + 1);
    strcpy(this->nume, nume);
    this->mancare = new char(strlen(mancare) + 1);
    strcpy(this->mancare, mancare);
}
void Gaini::afisare()
{
    cout << "NUME: " << nume << endl;
    cout << "NUMAR: " << numar << endl;
    cout << "MANCARE: " << mancare << endl;
    cout << "CANTITATE MANCARE: " << cantitate_mancare << " KG" << endl;
}
int Gaini::GetNumar()
{
    return numar;
}
int Gaini::GetCantitate_mancare()
{
    return cantitate_mancare;
}
char *Gaini::GetNume()
{
    return nume;
}
char *Gaini::GetMancare()
{
    return mancare;
}
Gaini::~Gaini()
{
    delete[] nume;
    delete[] mancare;
}