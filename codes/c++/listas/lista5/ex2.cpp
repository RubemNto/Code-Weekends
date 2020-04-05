#include <iostream>
#include <stdio.h>
#include <ctime>

using namespace std;

float salario;

void aumento(float sal)
{
    sal = sal + sal*0.15;
    cout << sal << endl;    
}

void desconto(float sal)
{
    sal = sal - sal * 0.08;
    cout << sal << endl;
}

int main()
{
    cout << "Salario: " << flush;
    cin >> salario;
    aumento(salario);
    desconto(salario);
    return 0;
}