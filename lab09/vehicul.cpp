#include "vehicul.hpp"

Vehicul::Vehicul()
{
    this->pret = 0;
    proprietar = NULL;
}

Vehicul::Vehicul(const char *propietar, int pret)
{
    this->pret = pret;
    this->proprietar = new char[strlen(propietar) + 1];
    strcpy(this->proprietar, propietar);
}
Vehicul::Vehicul(const Vehicul &obj)
{
    proprietar = NULL;
    *this = obj;
}
Vehicul &Vehicul::operator=(const Vehicul &obj)
{
    this->pret = obj.pret;
    if (proprietar != NULL)
    {
        delete[] proprietar;
    }
    this->proprietar = new char[strlen(obj.proprietar) + 1];
    strcpy(this->proprietar, obj.proprietar);

    return *this;
}
void Vehicul::afisare()
{
    cout << "================Vehicul===================" << endl;
    cout << "Proprietar: " << proprietar << endl;
    cout << "Pret: " << pret << endl;
    cout << endl;
}
char *Vehicul::getProprietar()
{
    return proprietar;
}
int Vehicul::getPret()
{
    return pret;
}
Vehicul::~Vehicul()
{
    delete[] proprietar;
}
