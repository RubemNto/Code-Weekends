#include <iostream>
#include <ctime>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL , "ptb");
    float valorDoProduto;
    cout << "Valor do produto: ";
    cin >> valorDoProduto;

    valorDoProduto = valorDoProduto - valorDoProduto*38/100;
    cout << "valor com desconto: "<<valorDoProduto<< endl;

    valorDoProduto = valorDoProduto + valorDoProduto*50/100;
    cout << "valor com aumento: "<<valorDoProduto << endl;
    return 0;
}