#include <iostream>
#include <cstring>

using namespace std;

class Nota
{
protected:
    int *note;
    int nr_note;

public:
    Nota();
    Nota(const int*, int);
    ~Nota();

    Nota& operator=(const Nota&);
    friend ostream& operator<<(ostream&, const Nota&);

    float getMedie();
};