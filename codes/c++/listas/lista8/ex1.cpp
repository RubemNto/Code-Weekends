#include <iostream>
#include <ctime>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    int numero;

    cout<<"numero: ";
    cin >> numero;

    if(numero%3 == 0)
    {
        cout << numero<< " é divisivel por 3\n";
    }else 
    {
        cout<< numero << " não é divisivel por 3\n";
    }
    return 0;
}
