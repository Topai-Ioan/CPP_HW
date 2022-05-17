#include <iostream>
#include <cstring>
using namespace std;

class Fractie
{

private:
    int a;
    int b;

public:
    Fractie(int aa = 0, int bb = 0);
    Fractie(const Fractie &);
    Fractie &operator=(const Fractie &);
    ~Fractie();

    double getValoare();
    Fractie getInv();
    void setdata(int, int);
    float getA();
    float getB();

    friend Fractie ireductibil(Fractie &);

    friend Fractie operator+(const Fractie &, const Fractie &);
    friend Fractie operator-(const Fractie &, const Fractie &);
    friend Fractie operator*(const Fractie &, const Fractie &);
    friend Fractie operator/(const Fractie &, const Fractie &);
    friend Fractie operator-(const Fractie &); // opus

    // Fractie &operator+(const Fractie &);
    // Fractie &operator-(const Fractie &);
    // Fractie &operator*(const Fractie &);
    // Fractie &operator/(const Fractie &);

    Fractie &operator+=(const Fractie &);
    Fractie &operator-=(const Fractie &);
    Fractie &operator*=(const Fractie &);
    Fractie &operator/=(const Fractie &);

    bool operator==(const Fractie &);
    bool operator!=(const Fractie &x);

    bool operator<(const Fractie &);
    bool operator<=(const Fractie &);
    bool operator>(const Fractie &);
    bool operator>=(const Fractie &);
};
