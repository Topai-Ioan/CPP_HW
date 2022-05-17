#pragma once
#include <iostream>
#include <string.h>
//#include <stdlib.h>
using namespace std;

class Ferma
{
public:
    virtual void afisare() = 0;
    virtual int GetNumar() = 0;
    virtual int GetCantitate_mancare() = 0;
    virtual char* GetNume() = 0;
    virtual char* GetMancare() = 0;

    virtual ~Ferma() = 0;
};