#include "sticla.hpp"

Sticla::Sticla() : Dop(), pret(0), marca(NULL)
{
    //cout << "Sticla: Constructor fara parametri" << endl;

    ///pret = 0;
    /// marca = NULL;
}

Sticla::Sticla(int diametru, const char*tip, int pret, const char *marca) : Dop(diametru, tip), pret(pret)
{
    //cout << "Sticla: Constructor cu parametri" << endl;

    ///this->pret = pret;
    this->marca = new char[strlen(marca) + 1];
    strcpy(this->marca, marca);
}

Sticla::Sticla(const Sticla &obj) : Dop(obj)
{
    marca = NULL;
    *this = obj;
}
Sticla::~Sticla()
{
    //cout << "Sticla: Destructor" << endl;
    delete[] marca;
}
int Sticla::GetPret()
{
    return this->pret;
}
Sticla &Sticla::operator=(const Sticla &obj)
{
    this->pret = obj.pret;
    if (obj.marca)
        delete[] marca;
    this->marca = new char[strlen(obj.marca) + 1];
    strcpy(this->marca, obj.marca);

    return *this;
}
istream &operator>>(istream &in, Sticla &obj)
{

    in >> (Dop &)obj;
    cout << "Pret Sticla = " << endl;
    in >> obj.pret;

    char nume[10];
    cout << "Marca Sticla = " << endl;
    in >> nume;
    //in >> ws; /// ignora spatiile libere
    //in.getline(nume,10); // in loc de in >> nume;
    if (obj.marca)
        delete[] obj.marca;
    obj.marca = new char[strlen(nume) + 1];
    strcpy(obj.marca, nume);

    return in;
}

ostream &operator<<(ostream &out, const Sticla &obj)
{
    out << (Dop &)obj;
    out << "Pret Sticla: " << obj.pret << endl;
    out << "Marca Sticla: " << obj.marca << endl;
    out << endl;

    return out;
}
