#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"ptb");

    float f1,f2,f3, f4, n1,n2, mF;

    cout << "nota1: ";
    cin >> f1;

    cout << "nota2: ";
    cin >> f2;

    cout << "nota3: ";
    cin >> f3;

    cout << "nota4: ";
    cin >> f4;

    n1 = (f1 + f2 + f3)/3.0;

    n2 = f4;

    mF = (n1*0.4) + (n2 * 0.6);

    cout << "média final é: " << mF<<endl;

    return 0;
}