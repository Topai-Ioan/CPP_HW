#include "fractie.hpp"

int main()
{
    Fractie fr(10, 15);
    cout << "Numaratorul a este: " << fr.getA() << endl;
    cout << "Numitorul b este: " << fr.getB() << endl;

    cout << "Valoarea fractiei este: " << fr.getValoare() << endl;

    Fractie frInv = fr.getInv();
    cout << "Valoarea fractiei inversata este: " << endl;
    cout << "a = " << frInv.getA() << endl;
    cout << "b = " << frInv.getB() << endl;

    Fractie fr1(fr);
    cout << "Fractia fr1 copiata si NEMODIFICATA este: " << endl;
    cout << "a = " << fr1.getA() << endl;
    cout << "b = " << fr1.getB() << endl;

    fr1.setdata(7, 9);
    cout << "Fractia fr1 modificata este: " << endl;
    cout << "a = " << fr1.getA() << endl;
    cout << "b = " << fr1.getB() << endl;

    cout << "============================" << endl;

    Fractie f1(9, 2), f2(5, 2);

    fr = f1 + f2;
    fr.operator=(f1 + f2);
    Fractie fr2(fr);
    //f1.operator+(f2);
    ireductibil(fr);
    cout << "Operatorul + :" << endl;
    cout << "a = " << fr.getA() << endl;
    cout << "b = " << fr.getB() << endl;

    fr = f1 - f2;
    ireductibil(fr);
    cout << "Operatorul - :" << endl;
    cout << "a = " << fr.getA() << endl;
    cout << "b = " << fr.getB() << endl;

    fr = f1 * f2;
    ireductibil(fr);
    cout << "Operatorul * :" << endl;
    cout << "a = " << fr.getA() << endl;
    cout << "b = " << fr.getB() << endl;

    fr = f1 / f2;
    ireductibil(fr);
    cout << "Operatorul / :" << endl;
    cout << "a = " << fr.getA() << endl;
    cout << "b = " << fr.getB() << endl;

    fr = operator-(f1);
    ireductibil(fr);
    cout << "Opusul lui f1 este: " << endl;
    cout << "a = " << fr.getA() << endl;
    cout << "b = " << fr.getB() << endl;

    cout << "================================" << endl;

    f1.setdata(1, 1);
    f2.setdata(3, 2);

    f1.operator+=(f2);
    ireductibil(f1);
    cout << "Operatorul += : " << endl;
    cout << "a = " << f1.getA() << endl;
    cout << "b = " << f1.getB() << endl;

    f1.setdata(1, 1);
    f1.operator-=(f2);
    ireductibil(f1);
    cout << "Operatorul -= : " << endl;
    cout << "a = " << f1.getA() << endl;
    cout << "b = " << f1.getB() << endl;

    f1.setdata(1, 1);
    f1.operator*=(f2);
    ireductibil(f1);
    cout << "Operatorul *= : " << endl;
    cout << "a = " << f1.getA() << endl;
    cout << "b = " << f1.getB() << endl;

    f1.setdata(1, 1);
    f1.operator/=(f2);
    ireductibil(f1);
    cout << "Operatorul /= : " << endl;
    cout << "a = " << f1.getA() << endl;
    cout << "b = " << f1.getB() << endl;

    cout << "=====================================" << endl;

    f1.setdata(1, 1);
    cout << "Operator boolean == : " << f1.operator==(f2) << endl;
    cout << "Operator boolean != : " << f1.operator!=(f2) << endl;
    cout << "Operator boolean < : " << f1.operator<(f2) << endl;
    cout << "Operator boolean > : " << f1.operator>(f2) << endl;
    cout << "Operator boolean >= : " << f1.operator>=(f2) << endl;
    cout << "Operator boolean <= : " << f1.operator<=(f2) << endl;

    return 0;
}