#include "remorca.hpp"

Remorca::Remorca()
{
    for (int i = 0; i < 3; i++)
    {
        this->dimensiuni[i] = 0;
    }
    this->greutate_maxima = 0;
}

Remorca::Remorca(const char *propietar, int pret, int dimensiuni[3], int greutate_maxima) : Vehicul(propietar, pret)
{
    for (int i = 0; i < 3; i++)
    {
        this->dimensiuni[i] = dimensiuni[i];
    }
    this->greutate_maxima = greutate_maxima;
}

Remorca::Remorca(const Remorca &obj)
{
    *this = obj;
}
Remorca &Remorca::operator=(const Remorca &obj)
{
    Vehicul::operator=(obj);
    this->greutate_maxima = obj.greutate_maxima;
    for (int i = 0; i < 3; i++)
    {
        this->dimensiuni[i] = obj.dimensiuni[i];
    }
    return *this;
}
int Remorca::get_greutate_maxima()
{
    return greutate_maxima;
}

void Remorca::getDimensiuni()
{
    cout << "lungime = " << dimensiuni[0] << endl;
    cout << "latime = " << dimensiuni[1] << endl;
    cout << "inaltime = " << dimensiuni[2] << endl;
}

void Remorca::afisare()
{
    cout << "=============REMORCA==========" << endl;
    cout << "Proprietar: " << Vehicul::getProprietar() << endl;
    cout << "Proprietar: " << proprietar << endl;
    cout << "Pret: " << pret; // vehicul::getPret();
    cout << "Dimensiuni remorca: " << endl;
    getDimensiuni();

    cout << "Greutate maxima: " << greutate_maxima; //get_greutate_max()
    cout << endl;
}