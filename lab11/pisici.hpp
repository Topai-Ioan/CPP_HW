#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>

class Pisici
{
public:
    virtual int GetVarsta() = 0;
    virtual bool GetVaccin() = 0;
    virtual char* GetNume() = 0;
    virtual char* GetDescriere() = 0;
    virtual char* GetCuloare() = 0;
    virtual char* GetCategorieVarsta() = 0;
    virtual void Afisare() = 0;
    virtual ~Pisici() = 0;
    
};