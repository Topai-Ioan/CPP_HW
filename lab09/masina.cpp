#include "masina.hpp"

Masina::Masina()
{
    for (int i = 0; i < 3; i++)
    {
        this->dimensiuni[i] = 0;
    }
    marca = NULL;
}

Masina::Masina(const char *propietar, int pret, int dimensiuni[3], const char *marca) : Vehicul(propietar, pret)
{
    this->marca = new char(strlen(marca) + 1);
    strcpy(this->marca, marca);
    for (int i = 0; i < 3; i++)
    {
        this->dimensiuni[i] = dimensiuni[i];
    }
}

Masina::Masina(const Masina &obj)
{
    marca = NULL;
    *this = obj;
}

Masina &Masina::operator=(const Masina &obj)
{
    Vehicul::operator=(obj);
    if (marca != NULL)
    {
        delete[] marca;
    }

    this->marca = new char[strlen(obj.marca) + 1];
    strcpy(this->marca, obj.marca);

    for (int i = 0; i < 3; i++)
    {
        this->dimensiuni[i] = obj.dimensiuni[i];
    }

    return *this;
}
void Masina::getDimensiuni()
{
    cout << "lungime = " << dimensiuni[0] << endl;
    cout << "latime = " << dimensiuni[1] << endl;
    cout << "inaltime = " << dimensiuni[2] << endl;
}

char *Masina::getMarca()
{
    return marca;
}
void Masina::afisare()
{
    cout << "==============MASINA==========" << endl;
    cout << "Proprietar: " << Vehicul::getProprietar() << endl;
    cout << "Pret: " << Vehicul::getPret() << endl;
    cout << "Marca: " << getMarca() << endl;
    cout << "Dimensiuni masina: " << endl;
    getDimensiuni();
    cout << endl;
}

Masina::~Masina()
{
    delete []marca;
}