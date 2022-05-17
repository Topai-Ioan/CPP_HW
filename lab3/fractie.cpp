#include "fractie.hpp"

Fractie::Fractie(int aa, int bb)
{
    a = aa;
    b = bb;
}

Fractie::Fractie(const Fractie &obj)
{
    cout<<"constructor de copiere" << endl;
    a = obj.a;
    b = obj.b;
}

Fractie &Fractie::operator=(const Fractie &obj)
{
    // this->a = obj.a;
    // this->b = obj.b;
    a = obj.a;
    b = obj.b;
    return *this;
}

Fractie::~Fractie()
{
    a = 0;
    b = 0;
}

double Fractie::getValoare()
{
    double aux = 0.0;
    if (b != 0)
    {
        aux = (double)a / b;
    }
    return aux;
}

Fractie Fractie ::getInv()
{
    Fractie aux;
    aux.a = this->b;
    aux.b = this->a;
    return aux;
}

void Fractie::setdata(int x, int y)
{
    a = x;
    b = y;
}
float Fractie::getA()
{
    return a;
}
float Fractie::getB()
{
    return b;
}
Fractie ireductibil(Fractie &obj)
{
    int x = obj.getA();
    int y = obj.getB();
    if (x < 0)
        x = -x;
    while (x != y)
    {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }

    obj.setdata(obj.getA() / x, obj.getB() / x);

    return obj;
}

Fractie operator+(const Fractie &obj1, const Fractie &obj2)
{
    Fractie aux;
    aux.a = obj1.a * obj2.b + obj1.b * obj2.a;
    aux.b = obj1.b * obj2.b;
    return aux;
}

Fractie operator-(const Fractie &obj1, const Fractie &obj2)
{
    Fractie aux;
    aux.a = obj1.a * obj2.b - obj1.b * obj2.a;
    aux.b = obj1.b * obj2.b;
    return aux;
}
Fractie operator*(const Fractie &obj1, const Fractie &obj2)
{
    Fractie aux;
    aux.a = obj1.a * obj2.a;
    aux.b = obj1.b * obj2.b;
    return aux;
}
Fractie operator/(const Fractie &obj1, const Fractie &obj2)
{
    Fractie aux;
    aux.a = obj1.a * obj2.b;
    aux.b = obj1.b * obj2.a;
    return aux;
}
Fractie operator-(const Fractie &obj1)
{
    Fractie aux(obj1);
    aux.a = -aux.a;
    return aux;
}

//============================================//
Fractie &Fractie::operator+=(const Fractie &a)
{
    *this = *this + a;
    return *this;
}
// Fractie &Fractie::operator+(const Fractie &obj)
// {
//     this->a = this->a + obj.a;
//     this->b = this->b + obj.b;
//     return *this;
// }

Fractie &Fractie::operator-=(const Fractie &a)
{
    *this = *this - a;
    return *this;
}
Fractie &Fractie::operator*=(const Fractie &a)
{
    *this = *this * a;
    return *this;
}
Fractie &Fractie::operator/=(const Fractie &a)
{
    *this = *this / a;
    return *this;
}
bool Fractie::operator==(const Fractie &obj)
{
    if ((*this).a == obj.a && (*this).b == obj.b)
        return true;
    else
        return false;
}

bool Fractie::operator!=(const Fractie &obj)
{
    if (!((*this).a == obj.a && (*this).b == obj.b))
        return true;
    else
        return false;
}

bool Fractie::operator<(const Fractie &obj)
{
    Fractie aux(obj);
    if ((*this).getValoare() < aux.getValoare())
        return true;
    else
        return false;
}
bool Fractie::operator<=(const Fractie &obj)
{
    Fractie aux(obj);
    if ((*this).getValoare() <= aux.getValoare())
        return true;
    else
        return false;
}

bool Fractie::operator>(const Fractie &obj)
{
    Fractie aux(obj);
    if ((*this).getValoare() > aux.getValoare())
        return true;
    else
        return false;
}
bool Fractie::operator>=(const Fractie &obj)
{
    Fractie aux(obj);
    if ((*this).getValoare() >= aux.getValoare())
        return true;
    else
        return false;
}