#include "Capre.hpp"

Capre::Capre() : nume(NULL), numar(0), mancare(NULL), cantitate_mancare(0) {}

Capre::Capre(const char *nume, int numar, const char *mancare, int cantitate_mancare)
{
    this->numar = numar;
    this->cantitate_mancare = cantitate_mancare;

    this->nume = new char(strlen(nume) + 1);
    strcpy(this->nume, nume);
    this->mancare = new char(strlen(mancare) + 1);
    strcpy(this->mancare, mancare);
}
void Capre::afisare()
{
    cout << "NUME: " << nume << endl;
    cout << "NUMAR: " << numar << endl;
    cout << "MANCARE: " << mancare << endl;
    cout << "CANTITATE MANCARE: " << cantitate_mancare << " KG" << endl;
}
int Capre::GetNumar()
{
    return numar;
}
int Capre::GetCantitate_mancare()
{
    return cantitate_mancare;
}
char *Capre::GetNume()
{
    return nume;
}
char *Capre::GetMancare()
{
    return mancare;
}
Capre::~Capre()
{
    delete[] nume;
    delete[] mancare;
}