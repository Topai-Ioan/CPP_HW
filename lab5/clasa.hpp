#include <iostream>
#include <cstring>

using namespace std;

class Clasa
{
protected:
    int nr_elevi;

public: 
    Clasa();
    Clasa(int);
    Clasa(const Clasa&);

    Clasa& operator=(const Clasa&);
    friend ostream& operator<<(ostream&, const Clasa&);

};