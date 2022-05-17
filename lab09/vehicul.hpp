#ifndef VEHICUL
#define VEHICUL

#include <iostream>
#include <cstring>
using namespace std;

class Vehicul
{
protected:
    char *proprietar;
    int pret;

public:
    Vehicul();
    Vehicul(const char *, int);
    Vehicul(const Vehicul &);
    Vehicul &operator=(const Vehicul &);

    void afisare();
    char *getProprietar();
    int getPret();
    ~Vehicul();
};

#endif
