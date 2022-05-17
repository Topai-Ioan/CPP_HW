#include <iostream>
#include <string.h>
using namespace std;

class Angajat
{
private:
    int varsta;
    char nume[20];
    char CNP[14];
    int salariu;

public:
    Angajat();
    Angajat(int v, char n[], char C[], int s);
    void afisare();
    void modif(int v, char n[], char C[], int s);
    int getVarsta();
    char *getNume();
    char *getCNP();
    int getSalariu();
};

Angajat::Angajat()
{
    varsta = 0;
    strcpy(nume, " ");
    strcpy(CNP, " ");
    salariu = 0;
}
Angajat::Angajat(int v, char n[], char C[], int s)
{
    varsta = v;
    strcpy(nume, n);
    strcpy(CNP, C);
    salariu = s;
}
void Angajat::afisare()
{
    cout << "Varsta: " << varsta << endl;
    cout << "Nume: " << nume << endl;
    cout << "CNP: " << CNP << endl;
    cout << "Salariu: " << salariu << endl;
    cout << endl;
}
void Angajat::modif(int v, char n[], char C[], int s)
{
    varsta = v;
    strcpy(nume, n);
    strcpy(CNP, C);
    salariu = s;
}
int Angajat::getVarsta()
{
    return varsta;
}
char *Angajat::getNume()
{
    return nume;
}
char *Angajat::getCNP()
{
    return CNP;
}
int Angajat::getSalariu()
{
    return salariu;
}
int main()
{
    // folosesc strdup sa sa-mi fie returnat un pointer (scap de warninguri)
    Angajat obj(20, strdup("Alex"), strdup("5010809012453"), 1700);
    cout << "Salariul angajatului " << obj.getNume() << " este: " << obj.getSalariu() << endl; 
    cout << endl;

    obj.modif(21, strdup("Cosmin"), strdup("5045741254612"), 2000);
    obj.afisare();

    //2
    Angajat *vector = new Angajat[5];
    vector[0].modif(20, strdup("Alex"), strdup("5010809012453"), 1700);
    vector[1].modif(21, strdup("Cosmin"), strdup("5045741254612"), 2000);
    vector[2].modif(18, strdup("Maria"), strdup("2810304154927"), 1800);
    vector[3].modif(42, strdup("Daniel"), strdup("1791011034738"), 3000);
    vector[4].modif(25, strdup("Dana"), strdup("1990121071724"), 2200);

    for (int i = 0; i < 5; i++)
    {
        vector[i].afisare();
    }

    //3
    cout << "\t\t\tVECTOR SORTAT" << endl;
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        Angajat aux;
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(vector[i].getNume(), vector[j].getNume()) > 0)
            {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        vector[i].afisare();
    }

    //4
    Angajat salariu_max = vector[0];

    for (int i = 0; i < 5; i++)
    {
        if (salariu_max.getSalariu() < vector[i].getSalariu())
        {
            salariu_max = vector[i];
        }
    }

    cout << "Angajatul cu salariul maxim este: " << endl;
    salariu_max.afisare();

    return 0;
}