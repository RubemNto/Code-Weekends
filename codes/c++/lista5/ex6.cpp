#include <iostream>
#include <ctime>
#include <stdio.h>

using namespace std;

const float salarioM = 1039;

int main()
{
    float salario;
    cout << "Salario: ";
    cin >> salario;
    cout << "Seu salario e equivalente a " << salario/salarioM << " salario minimo";
    return 0;
}