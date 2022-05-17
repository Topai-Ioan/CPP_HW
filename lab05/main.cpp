#include "studenti.hpp"

int main()
{
    Student *v;
    v = new Student[10];
    int nota0[4] = {6, 8, 10, 6};
    int nota1[3] = {1, 1, 1};
    int nota2[4] = {5, 5, 5, 5};
    int nota3[3] = {2, 2, 2};
    int nota4[4] = {4, 4, 2, 2};
    int nota5[4] = {9, 9, 9, 9};
    int nota6[4] = {10, 9, 8, 6};
    int nota7[4] = {6, 6, 6, 6};
    int nota8[4] = {4, 4, 4, 4};
    int nota9[3] = {10, 10, 10};

    v[0] = Student(nota0, 4, "Dna Diriginta", "323AB", "cozma");
    v[1] = Student(nota1, 3, "Dna Diriginta", "323AB", "alex");
    v[2] = Student(nota2, 4, "Dna Diriginta", "323AB", "daniel");
    v[3] = Student(nota3, 3, "Dna Diriginta", "323AB", "maria");
    v[4] = Student(nota4, 4, "Dna Diriginta", "323AB", "vlad");
    v[5] = Student(nota5, 4, "Dna Diriginta", "323AB", "pitu");
    v[6] = Student(nota6, 4, "Dna Diriginta", "323AB", "iustin");
    v[7] = Student(nota7, 4, "Dna Diriginta", "323AB", "cristi");
    v[8] = Student(nota8, 4, "Dna Diriginta", "323AB", "oana");
    v[9] = Student(nota9, 3, "Dna Diriginta", "323AB", "irina");

    Clasa clasa(10);
    cout << " Clasa" << endl;
    cout << clasa;

    int nr_elevi = 10;
    for (int i = 0; i < nr_elevi - 1; i++)
    {
        for (int j = i + 1; j < nr_elevi; j++)
        {
            if (v[i].getMedie() < v[j].getMedie())
            {
                v[i].interschimbare(v[j]);
            }
        }
    }

    for (int i = 0; i < nr_elevi; i++)
    {
        cout << v[i] << " " << endl;
    }

    cout << endl;
    Diriginte diri("Dumitriu", "323AB");
    diri.schimbare_nume("Dumitriu2");
    cout << "nOUL DIRIGINTE ESTE:" << endl;
    cout << diri << endl;
    cout << endl;

    int X;
    cout << "Introduceti pozitia X" << endl;
    cout << "X = ";
    cin >> X;

    Student *nou;
    nou = new Student[11];
    Student obj = Student(nota2, 4, "NOUL ELEV", "323AB", "Margareta");
    for (int i = 0; i < 11; i++)
    {
        if (i < X)
        {
            nou[i] = v[i];
        }
        else
        {
            if (i == X)
            {
                nou[i] = obj;
            }
            else
            {
                nou[i] = v[i-1];
            }
        }
    }

    for (int i = 0; i < 11; i++)
    {
        cout << nou[i] << " " << endl;
    }
}
