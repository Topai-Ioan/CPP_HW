#ifndef BAZA_HPP
#define BAZA_HPP
#include <iostream>
using namespace std;

class Baza
{
public:
    virtual void afisare() = 0;
    virtual ~Baza() = 0;
    virtual float PretFinal() = 0;
    virtual bool isPortocala() = 0;
    virtual bool isBanana() = 0;
    virtual bool isNuca() = 0;
    virtual bool isMorcov() = 0;
};
#endif