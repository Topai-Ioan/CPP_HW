#ifndef MASINA_CU_REMORCA
#define MASINA_CU_REMORCA

#include "remorca.hpp"
#include "masina.hpp"

class masina_cu_remorca : public Remorca, public Masina
{
    int masa_totala;

public:
    masina_cu_remorca();
    masina_cu_remorca(const char *, int, int[], int, int[], const char *, int);
    masina_cu_remorca(const masina_cu_remorca &);
    masina_cu_remorca &operator=(const masina_cu_remorca &);
    int get_masa_totala() const;
    void afisare();

    bool operator>(const masina_cu_remorca &);
    bool operator<(const masina_cu_remorca &);

    friend int operator+(const masina_cu_remorca &, const masina_cu_remorca &);
    friend int operator-(const masina_cu_remorca &, const masina_cu_remorca &);
};

#endif