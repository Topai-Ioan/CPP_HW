#include "Porci.hpp"

Porci::Porci() : nume(NULL), numar(0), mancare(NULL), cantitate_mancare1(0), cantitate_mancare2(0), mancare2(0) {}

Porci::Porci(const char *nume, int numar, const char *mancare, int cantitate_mancare1, const char*mancare2, int cantitate_mancare2)
{
    this->numar = numar;
    this->cantitate_mancare1 = cantitate_mancare1;
    this->cantitate_mancare2 = cantitate_mancare2;

    this->nume = new char(strlen(nume) + 1);
    strcpy(this->nume, nume);
    this->mancare = new char(strlen(mancare) + 1);
    strcpy(this->mancare, mancare);
    this->mancare2 = new char(strlen(mancare2) + 1);
    strcpy(this->mancare2, mancare2);
}
void Porci::afisare()
{
    cout << "NUME: " << nume << endl;
    cout << "NUMAR: " << numar << endl;
    cout << "MANCARE: " << mancare << endl;
    cout << "CANTITATE MANCARE: " << cantitate_mancare1 << " KG" << endl;
    cout << "MANCARE2: " << mancare2 << endl;
    cout << "CANTITATE MANCARE2: " << cantitate_mancare2 << " KG" << endl;
}
int Porci::GetNumar()
{
    return numar;
}
int Porci::GetCantitate_mancare1()
{
    return cantitate_mancare1;
}
int Porci::GetCantitate_mancare2()
{
    return cantitate_mancare2;
}
int Porci::GetCantitate_mancare()
{
    return cantitate_mancare2 + cantitate_mancare1;
}
char *Porci::GetNume()
{
    return nume;
}
char *Porci::GetMancare()
{
    return mancare;
}
char *Porci::GetMancare2()
{
    return mancare2;
}
Porci::~Porci()
{
    delete[] nume;
    delete[] mancare;
}