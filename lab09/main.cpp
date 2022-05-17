#include "masina_cu_remorca.hpp"

int main()
{
    Vehicul **v;
    v = new Vehicul *[10];

    int dimensiuni_r1[3] = {4, 2, 3};
    int dimensiuni_r2[3] = {3, 4, 3};
    int dimensiuni_m1[3] = {2, 3, 2};
    int dimensiuni_m2[3] = {3, 3, 2};

    v[0] = new Vehicul("maria", 6500);
    v[1] = new Vehicul("pitu", 6000);
    v[2] = new Masina("alex", 5000, dimensiuni_m1, "ford");
    v[3] = new Masina("robert", 2500, dimensiuni_m2, "golf 4");
    v[4] = new Remorca("adi", 1000, dimensiuni_r1, 750);
    v[5] = new Remorca("ionel", 1500, dimensiuni_r2, 1000);
    v[6] = new masina_cu_remorca("cross", 7000, dimensiuni_r1, 1500, dimensiuni_m1, "renault", 2000);
    v[7] = new masina_cu_remorca("andrei", 8000, dimensiuni_r2, 1250, dimensiuni_m2, "ford", 2500);

    for (int i = 0; i < 8; i++)
    {
        v[i]->afisare();
    }

    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (v[i]->getPret() > v[j]->getPret())
            {
                Vehicul *aux;
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    cout << endl;
    cout << "VECTORUL SORTAT ESTE: " << endl;
    cout << endl;
    for (int i = 0; i < 8; i++)
    {
        v[i]->afisare();
    }

    masina_cu_remorca obj1("cross", 7000, dimensiuni_r1, 1500, dimensiuni_m1, "renault", 2000);
    masina_cu_remorca obj2("andrei", 8000, dimensiuni_r2, 1250, dimensiuni_m2, "ford", 2500);
    cout << endl;
    cout << "operator \"<\" : " << (obj1 < obj2) << endl;
    cout << "operator \">\" : " << (obj1 > obj2) << endl;
    cout << "operator \"+\" : " << obj1 + obj2 << endl;
    cout << "operator \"-\" : " << obj1 - obj2 << endl;

    for (int i = 0; i < 8; i++)
    {
        delete v[i];
    }
    delete[] v;
    return 0;
}