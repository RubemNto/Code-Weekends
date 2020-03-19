#include <iostream>

using namespace std;

int numerDePaesVendidos;
int numerDeBroasVendidos;
const float precoDoCacetinho = 0.25f;
const float precoDoBroa = 1.5f;
float valorDoCaceting;
float valorDaBroing;

int main()
{
    cout << "Numero de Paes vendidos:" << flush; 
    cin >> numerDePaesVendidos; 
    cout <<  "Numero de Broas vendidas:" << flush;
    cin >> numerDeBroasVendidos;
    valorDoCaceting = numerDePaesVendidos * precoDoCacetinho;
    valorDaBroing = numerDeBroasVendidos * precoDoBroa;
    cout << "Voce arrecadou " << valorDoCaceting + valorDaBroing << " reais" << endl;
    return 0;
}