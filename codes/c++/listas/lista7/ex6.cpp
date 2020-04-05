#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    float valor,valorFinal;
    int formaDePagamento;

    cout<<"Preço do produto: ";
    cin>>valor;

    cout << "Forma de pagaento: ";
    cin >> formaDePagamento;

    if (formaDePagamento == 1)
    {
        valorFinal = valor * 0.85;
    }else if (formaDePagamento == 2)
    {
        valorFinal = valor * 0.9;
    }else if (formaDePagamento == 3)
    {
        valorFinal = valor;
    }else if (formaDePagamento == 4)
    {
        valorFinal = valor * 1.1;
    }else
    {
        cout << "opção inválida\n";
    }
            
    return 0;
}