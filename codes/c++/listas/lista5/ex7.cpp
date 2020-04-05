#include <iostream>
#include <ctime>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    float salarioM, salarioF, salarioTotal, despesas, percentualM, percentualF;

    cout << "Salário dele: ";
    cin >> salarioM;

    cout << "Salário dela: ";
    cin >> salarioF;

    cout << "Despesas: ";
    cin >> despesas;

    salarioTotal = salarioM + salarioF;
    percentualM = salarioM/salarioTotal;
    percentualF = 1-percentualM;

    cout << "o homem paga " << despesas * percentualM << " reais";
    cout << "A mulher paga " << despesas * percentualF << " reais";


    
    return 0;
}