#include <iostream>
#include <ctime>
#include <string>

using namespace std;

float desconto = 0.1f;
float valorDaCamisa = 19.0f;
float valorDaCalca = 75.0f;
float valorDoCinto = 40.0f;
float numCamisas;
float numCalcas;
float numcintos;

float valorDaCompra;

int main()
{
    //valor das camisas
    cout << "numero de cintos: ";
    cin >> numcintos;

    //valor das calcas
    cout << "numero de camisas: ";
    cin >> numCamisas;

    //valor dos cintos
    cout << "numero de calcas: ";
    cin >> numCalcas;

    valorDaCompra = (numcintos * valorDoCinto) + (numCalcas * valorDaCalca) + (numCamisas * valorDaCamisa);
    
    cout << "O valor da compra --> " << valorDaCompra << endl;
    if (valorDaCompra >= 100)
    {
         cout << "parabens, vc ganhou 10 por cento de desconto\n"
              << "Seu desconto --> " << valorDaCompra * desconto << "reais\n"
              << "Seu valor final --> " << valorDaCompra - (valorDaCompra * desconto);
    }
    
   
    return 0;
}