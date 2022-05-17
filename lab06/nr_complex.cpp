#include <math.h>
#include "nr_complex.hpp"

nr_complex::nr_complex(double a, double b)
{
    real = a;
    imaginar = b;
}

nr_complex::nr_complex(const nr_complex &c)
{
    real = c.real;
    imaginar = c.imaginar;
}

nr_complex &nr_complex::operator=(const nr_complex &c)
{
    real = c.real;
    imaginar = c.imaginar;

    return *this;
}

ostream &operator<<(ostream &out, nr_complex &c)
{
    cout << c.real << " + " << c.imaginar << "i"<< " ";
    return out;
}

double nr_complex::getValoare() const
{
    double aux;
    aux = sqrt((this->real) * (this->real) + (this->imaginar) * (this->imaginar));

    return aux;
}

bool nr_complex::operator<(const nr_complex &c)
{
    if ((*this).getValoare() < c.getValoare())
        return true;
    return false;
}