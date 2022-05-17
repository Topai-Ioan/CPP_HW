#include "ferma.hpp"
#include "vaci.hpp"
#include "gaini.hpp"
#include "cai.hpp"
#include "capre.hpp"
#include "porci.hpp"
int main()
{
    Ferma **obj;
    obj = new Ferma *[5];

    obj[0] = new Vaci("vaci", 10, "nutret", 30);
    obj[1] = new Gaini("gaini", 100, "graunte", 5);
    obj[2] = new Porci("porci", 8, "graunte", 4, "iarba", 5);
    obj[3] = new Cai("cai", 2, "nutret", 8);
    obj[4] = new Capre("capre", 4, "nutret", 4);

    Porci *porci;
    porci = (Porci *)obj[2];

    cout << "Ferma: " << endl;
    cout << endl;
    for (int i = 0; i < 5; i++)
        obj[i]->afisare();

    //* cata mancare se consuma pe zi(in total si pe fiecare categorie)

    int iarba_zi = 0, nutret_zi = 0, graunte_zi = 0;
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(obj[i]->GetNume(), "porci") == 0)
        {
            iarba_zi += porci->GetCantitate_mancare2();
            graunte_zi += porci->GetCantitate_mancare1();
        }
        else
        {
            if (strcmp(obj[i]->GetMancare(), "nutret") == 0)
                nutret_zi += obj[i]->GetCantitate_mancare();
            if (strcmp(obj[i]->GetMancare(), "graunte") == 0)
                graunte_zi += obj[i]->GetCantitate_mancare();
            if (strcmp(obj[i]->GetMancare(), "iarba") == 0)
                iarba_zi += obj[i]->GetCantitate_mancare();
        }
    }
    int daily_food = iarba_zi + graunte_zi + nutret_zi;
    cout << "Mancarea zilnica totala este: " << daily_food << endl;
    cout << "Mancarea zilnica de graunte este: " << graunte_zi << endl;
    cout << "Mancarea zilnica de iarba este: " << iarba_zi << endl;
    cout << "Mancarea zilnica nutret este: " << nutret_zi << endl;

    //*ce cantitate din fiecare mancare trebuie stocata in depozit astfel incat aceasta sa ajunga cat mai multe zile
    int capacitate = 2000;
    float nutret = (float)nutret_zi / daily_food * capacitate;
    float graunte = (float)graunte_zi / daily_food * capacitate;
    float iarba = (float)iarba_zi / daily_food * capacitate;
    cout << "cantitatea (in KG) necesara pentru a ajunge cat mai multe zile este:  " << endl;
    cout << "Nutret: " << nutret << endl;
    cout << "Graunte: " << graunte << endl;
    cout << "iarba: " << iarba << endl;
    //*de cate ori trebuie sa fie reumplut depozitul
    int reumplere = daily_food * 365 / capacitate + 1;

    cout << "depozitul va fi reumplut de " << reumplere << " ori" << endl;

    //*afisati cata mancare va ramane la finalul anului (in total si pe fiecare categorie)
    // total
    int ramas = reumplere * capacitate - (daily_food * 365);
    cout << "la finalul anului mancarea totala ramasa va fi de: " << ramas << " kg" << endl;
    // pe categorii

    float nutret_ramas = (float)nutret_zi / daily_food * ramas;
    float graunte_ramase = (float)graunte_zi / daily_food * ramas;
    float iarba_ramasa = (float)iarba_zi / daily_food * ramas;
    cout << "Cantitate ramasa la final de an: " << endl;
    cout << "Nutret: " << nutret_ramas << endl;
    cout << "Graunte: " << graunte_ramase << endl;
    cout << "iarba: " << iarba_ramasa << endl;

    // top 3 consumatori
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (obj[i]->GetCantitate_mancare() < obj[j]->GetCantitate_mancare())
            {
                Ferma *aux = obj[i];
                obj[i] = obj[j];
                obj[j] = aux;
            }
        }
    }
    cout << "top 3 consumatori: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << obj[i]->GetNume() << " ";
    }

    for (int i = 0; i < 5; i++)
        delete obj[i];

    delete[] obj;
}