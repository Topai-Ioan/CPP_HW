#include "vaci.hpp"

Vaci::Vaci() : nume(NULL), numar(0), mancare(NULL), cantitate_mancare(0) {}

Vaci::Vaci(const char *nume, int numar, const char *mancare, int cantitate_mancare)
{
    this->numar = numar;
    this->cantitate_mancare = cantitate_mancare;

    this->nume = new char(strlen(nume) + 1);
    strcpy(this->nume, nume);
    this->mancare = new char(strlen(mancare) + 1);
    strcpy(this->mancare, mancare);
}
void Vaci::afisare()
{
    cout << "NUME: " << nume << endl;
    cout << "NUMAR: " << numar << endl;
    cout << "MANCARE: " << mancare << endl;
    cout << "CANTITATE MANCARE: " << cantitate_mancare << " KG" << endl;
}
int Vaci::GetNumar( )
{
    return numar;
}
int Vaci::GetCantitate_mancare()
{
    return cantitate_mancare;
}
char* Vaci::GetNume()
{
    return nume;
}
char* Vaci::GetMancare()
{
    return mancare;
}
Vaci::~Vaci()
{
    delete[] nume;
    delete[] mancare;
}