#include <iostream>
#include <ctime>
#include <string>

using namespace std;

float desconto = 0.15f;
float valorDaCompra;

int main()
{
    cout << "Valor da compra: ";
    cin >> valorDaCompra;
    valorDaCompra = valorDaCompra - (valorDaCompra * desconto);
    cout << "parabens, voce ganhou 15 por cento de desconto\n"
        << "O valor de sua compra agora --> " << valorDaCompra;
    return 0;
}