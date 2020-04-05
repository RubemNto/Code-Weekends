#include <iostream>
#include <ctime>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    float hsTrab;
    float valorDaHora;
    float salarioBruto;

    const float percentualDeimposto = 10;
    float desconto;

    cout << "Horas Trabalhadas: ";
    cin >> hsTrab;

    cout << "valor da hora: ";
    cin >> valorDaHora;

    cout << "Salário Bruto: " << valorDaHora * hsTrab << " reais\n";
    
    // cout << "porcentagem de imposto: ";
    // cin >> percentualDeimposto;

    desconto = percentualDeimposto/100 * salarioBruto;
    cout << "Gastos com imposto: " << desconto << " reais"<<endl;

    cout << "salário líquido é: " << salarioBruto - desconto << " reais";

    return 0;
}