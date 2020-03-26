#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    int numero, menor, maior;
//numero 1
    cout<<"informe numero: ";
    cin >> numero;

    menor = numero;
    maior = numero;
//numero 2
    cout<<"informe numero: ";
    cin >> numero;

    if(numero < menor)
    {
        menor = numero;
    }

    if (numero > maior)
    {
        maior = numero;
    }
//numero 3
    cout<<"informe numero: ";
    cin >> numero;

    if(numero < menor)
    {
        menor = numero;
    }

    if (numero > maior)
    {
        maior = numero;
    }
//numero 4
    cout<<"informe numero: ";
    cin >> numero;

    if(numero < menor)
    {
        menor = numero;
    }

    if (numero > maior)
    {
        maior = numero;
    }
//numero 5
    cout<<"informe numero: ";
    cin >> numero;

    if(numero < menor)
    {
        menor = numero;
    }

    if (numero > maior)
    {
        maior = numero;
    }

cout << "maior: " << maior<<endl
    <<"menor: " << menor << endl;
    

    return 0;
}