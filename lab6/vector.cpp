#include "vector.hpp"
#include "fractie.hpp"
#include "nr_complex.hpp"

template <class X>
vector<X>::vector(int dim, X *buf)
{
    this->dim = dim;
    this->buf = new X[dim];
    for (int i = 0; i < dim; i++)
    {
        this->buf[i] = buf[i];
    }
}

template <class X>
vector<X>::~vector()
{
    delete[] buf;
}

template <class X>
vector<X> &vector<X>::operator=(vector<X> &obj)
{
    dim = obj.dim;
    buf = new X[dim];

    for (int i = 0; i < dim; i++)
    {
        buf[i] = obj.buf[i];
    }

    return *this;
}

template <class X>
void vector<X>::afisare()
{
    cout << "Dimensiune: " << dim << endl;
    for (int i = 0; i < dim; i++)
    {
        cout << buf[i] << " ";
    }
    cout << endl;
}
template <class X>
void vector<X>::sortare()
{
    for (int i = 0; i < dim; i++)
    {
        for (int j = i + 1; j < dim; j++)
        {
            if (buf[i] < buf[j])
            {
                X aux = buf[i];
                buf[i] = buf[j];
                buf[j] = aux;
            }
        }
    }
}

namespace
{
    void test()
    {
        int aux1[1] = {0};
        vector<int> v1(1, aux1);
        v1.afisare();

        double aux2[1] = {0};
        vector<double> v2(1, aux2);
        v2.afisare();

        nr_complex aux3[1];
        aux3[0] = nr_complex(0, 0);
        vector<nr_complex> complex(1, aux3);
        complex.afisare();

        fractie aux4[1];
        aux4[0] = fractie(1, 1);

        vector<fractie> fractie(1, aux4);
        fractie.afisare();

        v1.sortare();
        v2.sortare();
        complex.sortare();
        fractie.sortare();
    }
}