#include <iostream>
#include <ctime>
#include <stdio.h>

using namespace std;

int main()
{
    float alturaP;
    float alturaM;
    float sombraP;
    float sombraM;

    cout << "Sua altura: ";
    cin >> alturaM;

    cout << "Comprimento de sua sombra: ";
    cin >> sombraM;

    cout << "Comprimento da sombra do predio: ";
    cin >> sombraP;

    alturaP = alturaM*sombraP/sombraM;

    cout << "altura do predio: " << alturaP << "m";
    return 0;
}