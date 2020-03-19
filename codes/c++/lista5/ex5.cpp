#include <iostream>
#include <ctime>
#include <stdio.h>

using namespace std;

int main()
{
    int centavos1;
    int centavos5;
    int centavos10;
    int centavos25;
    int centavos50;
    int umReal;
    float realF;

    cout<<"quantidade de moedas de 1, 5, 10, 25 e 50 centavos: ";
    cin >> centavos1 >> centavos5 >> centavos10 >> centavos25 >> centavos50;
    cout << "Quantidade de moedas de um real: ";
    cin >> umReal;
    realF = umReal + (centavos1 + centavos5*5 + centavos10*10 + centavos25*25 + centavos50*50)/100;
    cout << "Reais total no cofrinho: " << realF;
    return 0;
}