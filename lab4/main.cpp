#include "sticla.hpp"

int main()
{
    Sticla *s;
    s = new Sticla[5];
    for (int i = 0; i < 5; i++)
        cin >> s[i];
    cout << endl;

    cout << "Afisare sticle: " << endl;
    for (int i = 0; i < 5; i++)
        cout << s[i];

    cout << endl;
    cout << "Pretul Sticlelor nesortate: " << endl;
    for (int i = 0; i < 5; i++)
        cout << s[i].GetPret() << " ";

    cout << endl;
    cout << "Pretul Sticlelor sortate: " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (s[i].GetPret() > s[j].GetPret())
            {
                Sticla aux;
                aux = s[i];
                s[i] = s[j];
                s[j] = aux;
            }
        }
    }
    for (int i = 0; i < 5; i++)
        cout << s[i].GetPret() << " ";

    cout << endl;
    cout << "Sticle care au diametru dop peste 5 sunt: " << endl;
    for (int i = 0; i < 5; i++)
    {
        if(s[i].GetDiametru() > 5)
        {
            cout << s[i] << endl;
        }
    }

    delete[] s;

    return 0;
}
