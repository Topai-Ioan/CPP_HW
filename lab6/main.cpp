#include "vector.hpp"

int main()
{
    cout << "=================INT=============" << endl;

    int aux_int[10] = {1, 5, 75, 3, 6, 23, -43, 4, 65, 65};
    vector<int> v1(10, aux_int);
    v1.afisare();
    cout << endl;
    cout << "Sortare: " << endl;
    v1.sortare();
    v1.afisare();

    cout << "=================DOUBLE=============" << endl;
    double aux_d[6] = {3.14159265358979, 2.7182818, 3.15, 6.15158989, 11.1111, 0.00000004};
    vector<double> v2(6, aux_d);
    v2.afisare();
    cout << endl;
    cout << "Sortare: " << endl;
    v2.sortare();
    v2.afisare();

    cout << "=================NR_COMPLEX=====================" << endl;

    nr_complex *aux_c = new nr_complex[7];
    aux_c[0] = nr_complex(1, 1);
    aux_c[1] = nr_complex(1, 2);
    aux_c[2] = nr_complex(2, 1);
    aux_c[3] = nr_complex(15, -14);
    aux_c[4] = nr_complex(-15, 14);
    aux_c[5] = nr_complex(-15, -14);
    aux_c[6] = nr_complex(15, 14);
    vector<nr_complex> complex(7, aux_c);
    complex.afisare();
    cout << endl;
    cout << "Sortare (dupa modul) : " << endl;
    complex.sortare();
    complex.afisare();

    cout << endl;
    cout << "=================Fractie=============" << endl;
    fractie *aux_f = new fractie[7];
    aux_f[0] = fractie(1, 1);
    aux_f[1] = fractie(-1, 1);
    aux_f[2] = fractie(0, 1);
    aux_f[3] = fractie(3, 3);
    aux_f[4] = fractie(15, 10);
    aux_f[5] = fractie(1, 5);
    aux_f[6] = fractie(9, 2);
    vector<fractie> fractie(7, aux_f);
    fractie.afisare();
    cout << endl;
    cout << "Sortare: " << endl;
    fractie.sortare();
    fractie.afisare();

    return 0;
}