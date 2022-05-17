#include "Cai.hpp"

Cai::Cai() : nume(NULL), numar(0), mancare(NULL), cantitate_mancare(0) {}

Cai::Cai(const char *nume, int numar, const char *mancare, int cantitate_mancare)
{
    this->numar = numar;
    this->cantitate_mancare = cantitate_mancare;

    this->nume = new char(strlen(nume) + 1);
    strcpy(this->nume, nume);
    this->mancare = new char(strlen(mancare) + 1);
    strcpy(this->mancare, mancare);
}
void Cai::afisare()
{
    cout << "NUME: " << nume << endl;
    cout << "NUMAR: " << numar << endl;
    cout << "MANCARE: " << mancare << endl;
    cout << "CANTITATE MANCARE: " << cantitate_mancare << " KG" << endl;
}
int Cai::GetNumar()
{
    return numar;
}
int Cai::GetCantitate_mancare()
{
    return cantitate_mancare;
}
char *Cai::GetNume()
{
    return nume;
}
char *Cai::GetMancare()
{
    return mancare;
}
Cai::~Cai()
{
    delete[] nume;
    delete[] mancare;
}