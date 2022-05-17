#include "portocale.hpp"
#include "banana.hpp"
#include "nuci.hpp"
#include "morcovi.hpp"

int main()
{
    Baza **v;
    v = new Baza *[10];
    Baza *aux;

    cout << endl;
    v[0] = new Portocale(3, 5);
    v[1] = new Banana(5);
    v[2] = new Nuci(500, 5);
    v[3] = new Morcovi(500, 3);
    v[4] = new Banana(2);
    v[5] = new Nuci(300, 6);
    v[6] = new Morcovi(100, 3);
    v[7] = new Portocale(7, 6);
    v[8] = new Nuci(200, 4);
    v[9] = new Banana(7);

    for (int i = 0; i < 10; i++)
        v[i]->afisare();

    float suma = 0.0;
    for (int i = 0; i < 10; i++)
    {
        suma = suma + v[i]->PretFinal();
    }
    cout << "Suma tutoror alimentelor este: " << suma << endl;
    cout << endl;
    // sortare
    cout << "LEGUMELE SORTATE SUNT :" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (v[i]->isBanana() == true)
            {

                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (v[i]->isPortocala() != false)
            {
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (v[i]->isMorcov() != false)
            {
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (v[i]->isNuca() == true)
            {
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }

    for (int i = 0; i < 10; i++)
        v[i]->afisare();

    suma = 0.0;
    for (int i = 0; i < 10; i++)
    {
        if (v[i]->isPortocala() == true)
        {
            suma = suma + v[i]->PretFinal();
        }
    }

    cout << "costul total al portocalelor este: " << suma << endl;

    for (int i = 0; i < 10; i++)
    {
        delete v[i];
    }
    delete[] v;
    return 0;
}