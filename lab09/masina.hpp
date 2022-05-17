#ifndef MASINA
#define MASINA

#include "vehicul.hpp"

class Masina: virtual public Vehicul
{
protected:
    int dimensiuni[3];
    char *marca;

public:
    Masina();
    Masina(const char*, int, int[], const char*);
    Masina(const Masina&);
    Masina& operator=(const Masina&);

    void getDimensiuni();
    char* getMarca();
    void afisare();
    ~Masina();
};

#endif