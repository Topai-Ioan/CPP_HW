#include "note.hpp"
#include "diriginte.hpp"
#include "clasa.hpp"


class Student : public Nota, public Diriginte, public Clasa
{
    char *nume;

public:
    Student();
    Student(const int *, int, const char *, const char[], const char *);
    Student(const Student &);
    ~Student();

    Student &operator=(const Student &);
    friend ostream &operator<<(ostream &, const Student &);

    void interschimbare(Student &);
};