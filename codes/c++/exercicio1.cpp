#include <iostream>
#include <ctime>
#include <string>

using namespace std;

//variaveis
int idade = 10;
int terreno;

void calcularAreaDoTerreno(int numeroDoTerreno)
{
    float largura;
    float comprimento;
    setlocale(LC_ALL, "ptb");
    if (numeroDoTerreno == 1)
    {
        largura = 10.5;
        comprimento = 5.0;
        cout << "Sua área é " << largura * comprimento << " métros quadrados." << endl;
    }else if (numeroDoTerreno == 2)
    {
        largura = 5.5;
        comprimento = 5.0;
        cout << "Sua area e" << largura * comprimento << "metros quadrados." << endl;
    }else if (numeroDoTerreno == 3)
    {
        largura = 0.25;
        comprimento = 100;
        cout << "Sua area e" << largura * comprimento << "metros quadrados." << endl;
    }else
    {
        cout << "Isso não é uma terra disponivel." << endl;
    }
        
}

int main()
{
    // define que estou no brasil
    setlocale(LC_ALL, "ptb");

    cout << "Qual é o terreno secreto que voce quer, o numero 1, 2 ou 3?" << endl
         << "numero do terreno(1,2 ou 3): " << flush;    
    cin >> terreno;
    calcularAreaDoTerreno(terreno);       
    return 0;
}

/*
para adicionar vírgula
setlocale(LC_ALL, "ptb");*/

