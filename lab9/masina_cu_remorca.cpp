#include "masina_cu_remorca.hpp"

masina_cu_remorca::masina_cu_remorca() : Remorca(), Masina(), masa_totala(0), Vehicul() {}

masina_cu_remorca::masina_cu_remorca(const char *propietar, int pret, int dimensiuni[3], int greutate_maxima, int dimension[3], const char *marca, int masa_totala) : Remorca(propietar, pret, dimensiuni, greutate_maxima), Masina(propietar, pret, dimension, marca), Vehicul(propietar, pret), masa_totala(masa_totala)
{
}

masina_cu_remorca::masina_cu_remorca(const masina_cu_remorca &obj)
{
    *this = obj;
}

masina_cu_remorca &masina_cu_remorca::operator=(const masina_cu_remorca &obj)
{
    Vehicul::operator=(obj);
    Remorca::operator=(obj);

    this->masa_totala = obj.masa_totala;

    return *this;
}

int masina_cu_remorca::get_masa_totala() const
{
    return masa_totala;
}

void masina_cu_remorca::afisare()
{
    cout << "================================MASINA CU REMORCA=======================" << endl;
    cout << "Proprietar: " << Vehicul::getProprietar() << endl;
    cout << "Pret: " << Vehicul::getPret() << endl;
    cout << "Marca: " << Masina::getMarca() << endl;
    cout << "Dimeniuni masina: " << endl;
    Masina::getDimensiuni();

    cout << "Dimensiuni remorca: " << endl;
    Remorca::getDimensiuni();
    cout << "Greutate maxima: " << greutate_maxima << endl;
    cout << "Masa totala: " << masa_totala << endl;
    cout << endl;
}
bool masina_cu_remorca::operator<(const masina_cu_remorca &obj)
{
    if (this->get_masa_totala() < obj.get_masa_totala())
    {
        return true;
    }
    return false;
}
bool masina_cu_remorca::operator>(const masina_cu_remorca &obj)
{
    if (this->get_masa_totala() > obj.get_masa_totala())
    {
        return true;
    }
    return false;
}
int operator+(const masina_cu_remorca &obj1, const masina_cu_remorca &obj2)
{
    masina_cu_remorca obj;
    obj.masa_totala = obj1.masa_totala + obj2.masa_totala;
    return obj.masa_totala;
}
int operator-(const masina_cu_remorca &obj1, const masina_cu_remorca &obj2)
{
    masina_cu_remorca obj;
    obj.masa_totala = obj1.masa_totala - obj2.masa_totala;
    return obj.masa_totala;
}