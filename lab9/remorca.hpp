#ifndef REMORCA
#define REMORCA

#include "vehicul.hpp"

class Remorca: virtual public Vehicul
{
protected:
    int dimensiuni[3];
    int greutate_maxima;

public:
    Remorca();
    Remorca(const char *, int, int[], int);
    Remorca(const Remorca&);
    Remorca& operator=(const Remorca&);

    int get_greutate_maxima();
    void getDimensiuni();
    void afisare();
};

#endif