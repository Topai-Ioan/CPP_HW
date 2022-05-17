#include <iostream>
#include <cstring>

using namespace std;

class Biblioteca
{
    int an_construire;
    char adresa[20];
    char *nume;
    char *bibliotecar;

public:
    Biblioteca();
    Biblioteca(char adresa[], char *nume, char *bibliotecar, int an_construire);
    Biblioteca(const Biblioteca &);
    ~Biblioteca();

    void afisare() const;
    void modif(char *, char *, char[], int);
    char *getBibliotecar() const;
    char *getNume();
    friend int getAn(const Biblioteca &);
    friend void interschimbare(Biblioteca &, Biblioteca &);
};

Biblioteca::Biblioteca()
{
    //cout << "Constructor fara parametri" << endl;
    //nume = NULL;
    //bibliotecar = NULL;

    nume = strdup(" ");
    bibliotecar = strdup(" ");
    an_construire = 0;
    strcpy(adresa, " ");
}
Biblioteca::Biblioteca(char a[], char *n, char *b, int an)
{
    //cout << "Constructor cu parametri\n";
    an_construire = an;
    nume = new char[strlen(n) + 1];
    bibliotecar = new char[strlen(b) + 1];
    strcpy(adresa, a);
    strcpy(nume, n);
    strcpy(bibliotecar, b);
}
Biblioteca::Biblioteca(const Biblioteca &obj)
{
    //cout << "Constructor de copiere\n";
    nume = new char[strlen(obj.nume) + 1];
    bibliotecar = new char[strlen(obj.bibliotecar) + 1];
    strcpy(adresa, obj.adresa);
    strcpy(nume, obj.nume);
    strcpy(bibliotecar, obj.bibliotecar);
    an_construire = obj.an_construire;
}
Biblioteca ::~Biblioteca()
{
    // cout << "Destructor. " << nume << endl;
    delete[] nume;
    delete[] bibliotecar;
}
void Biblioteca::afisare() const
{
    cout << "Nume: " << nume << endl;
    cout << "Bibliotecar: " << bibliotecar << endl;
    cout << "Adresa: " << adresa << endl;
    cout << "An Construire: " << an_construire << endl;
    cout << "-----------------------------" << endl;
}
void Biblioteca::modif(char a[], char *n, char *b, int an)
{
    if (nume != NULL)
    {
        delete[] nume;
    }
    if (bibliotecar != NULL)
    {
        delete[] bibliotecar;
    }
    nume = new char[strlen(n) + 1];
    bibliotecar = new char[strlen(b) + 1];

    strcpy(nume, n);
    strcpy(bibliotecar, b);
    strcpy(adresa, a);
    an_construire = an;
}
char *Biblioteca::getBibliotecar() const
{
    return bibliotecar;
}
int getAn(const Biblioteca &obj)
{
    return obj.an_construire;
}
char *Biblioteca::getNume()
{
    return nume;
}
void interschimbare(Biblioteca &obj1, Biblioteca &obj2)
{
    Biblioteca obj3(obj1);

    if (obj1.nume != NULL)
        delete[] obj1.nume;
    if (obj1.bibliotecar != NULL)
        delete[] obj1.bibliotecar;

    obj1.nume = new char[strlen(obj2.nume) + 1];
    obj1.bibliotecar = new char[strlen(obj2.bibliotecar) + 1];
    strcpy(obj1.nume, obj2.nume);
    strcpy(obj1.bibliotecar, obj2.bibliotecar);
    strcpy(obj1.adresa, obj2.adresa);
    obj1.an_construire = obj2.an_construire;

    if (obj2.nume != NULL)
        delete[] obj2.nume;
    if (obj2.bibliotecar != NULL)
        delete[] obj2.bibliotecar;
    obj2.nume = new char[strlen(obj3.nume) + 1];
    obj2.bibliotecar = new char[strlen(obj3.bibliotecar) + 1];
    strcpy(obj2.nume, obj3.nume);
    strcpy(obj2.bibliotecar, obj3.bibliotecar);
    strcpy(obj2.adresa, obj3.adresa);
    obj2.an_construire = obj3.an_construire;
}
int main()
{
    Biblioteca obj1;
    obj1.afisare();

    Biblioteca obj2(strdup("Constanta"), strdup("Biblioteca 2"), strdup("Ioan Andrei"), 2000);
    obj2.afisare();

    obj1.modif(strdup("Bucuresti"), strdup("Biblioteca 1"), strdup("Ioana Alexandra"), 1965);
    obj1.afisare();

    cout << "Bibliotecarul obj1 este: " << obj1.getBibliotecar() << endl;

    cout << "Anul obj1 este: " << getAn(obj1) << endl;

    interschimbare(obj1, obj2);

    obj1.afisare(); // acum biblioteca 2 se afla aici
    obj2.afisare(); // acum biblioteca 1 se afla aici

    //2

    Biblioteca *vector = new Biblioteca[5];

    vector[0].modif(strdup("Constanta"), strdup("Biblioteca din CT2"), strdup("Ioan Andrei"), 2000);
    vector[1].modif(strdup("Bucuresti"), strdup("Biblioteca din Bucuresti"), strdup("Ioana Alexandra"), 1965);
    vector[2].modif(strdup("Craiova"), strdup("Biblioteca din Craiova"), strdup("Ioana Tudor"), 1995);
    vector[3].modif(strdup("Tulcea"), strdup("Biblioteca de langa Delta"), strdup("Alexandru Topai"), 1955);
    vector[4].modif(strdup("Constanta"), strdup("Biblioteca din CT1"), strdup("Cozma"), 1900);

    // for (int i = 0; i < 5; i++)
    // {
    //     vector[i].afisare();
    // }

    //3
    cout << "\t\t\tVECTOR SORTAT" << endl;
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(vector[i].getNume(), vector[j].getNume()) > 0)
            {
                interschimbare(vector[i], vector[j]);
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        vector[i].afisare();
    }
    //4
    Biblioteca veche = vector[0];

    for (int i = 0; i < 5; i++)
    {
        if (getAn(veche) > getAn(vector[i]))
        {
            veche = vector[i];
        }
    }

    cout << "Biblioteca cea mai veche este: " << endl;
    veche.afisare();

    return 0;
}