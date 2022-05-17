#include "dop.hpp"

Dop::Dop() //*:diametru(0), tip(NULL)
{
    //cout << "Dop: Constructor fara parametru" << endl;

    diametru = 0;
    tip = NULL;
}

Dop::Dop(int d, const char *tip)
{
    //cout << "Dop: Constructor cu paramtetri" << endl;

    diametru = d;
    this->tip = new char[strlen(tip) + 1];
    strcpy(this->tip, tip);
}

Dop::Dop(const Dop &obj)
{
    //cout << "Dop: Constructor de copiere" << endl;

    tip = NULL;
    *this = obj;
}
Dop::~Dop()
{
    //cout << "Dop: Destructor" << endl;
    delete[] tip;
}
int Dop::GetDiametru()
{
    return this->diametru;
}
Dop &Dop::operator=(const Dop &obj)
{
    this->diametru = obj.diametru;
    if (obj.tip)
        delete[] tip;
    this->tip = new char[strlen(obj.tip) + 1];
    strcpy(this->tip, obj.tip);

    return *this;
}
istream &operator>>(istream &in, Dop &obj)
{

    cout << "Diametru Dop = " << endl;
    in >> obj.diametru;

    char nume[10];
    cout << "Tip Dop = " << endl;
    in >> nume;
    if (obj.tip)
        delete[] obj.tip;
    obj.tip = new char[strlen(nume) + 1];
    strcpy(obj.tip, nume);
    return in;
}

ostream &operator<<(ostream &out, const Dop &obj)
{

    out << "Diametru Dop: " << obj.diametru << endl;
    out << "Tip Dop: " << obj.tip << endl;

    return out;
}
