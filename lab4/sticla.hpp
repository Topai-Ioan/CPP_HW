#ifndef STICLA_HPP
#define STICLA_HPP
#include "dop.hpp"

class Sticla : public Dop
{
    int pret;
    char *marca;

public:
    Sticla();
    Sticla(int, const char *, int, const char*);
    Sticla(const Sticla &);
    int GetPret();
    ~Sticla();

    Sticla &operator=(const Sticla &);

    friend ostream& operator<<(ostream &, const Sticla &);
    friend istream& operator>>(istream &, Sticla &);
};


#endif
