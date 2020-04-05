#include <iostream>

using namespace std;

int main()
{
    int moeda, moeda2;
    float valor;

    cout << "qual é sua moeda, reais, dolar ou euro(1, 2 ou 3): ";
    cin >> moeda;

    cout << "valor a ser convertido: ";
    cin >> valor;

    if (moeda == 1)
    {
        cout << "Converter reais para dolar ou euro(1 ou 2): ";
        cin >> moeda2;
        if(moeda2 == 1)
        {
            valor/=5.0;
        }else
        {
            valor/=5.5;
        }
        
    }else if(moeda == 2)
    {
        cout << "Converter dolar para reais ou euro(1 ou 2): ";
        cin >> moeda2;
        if(moeda2 == 1)
        {
            valor*5;
        }else
        {
            valor*0.92;
        }
    }else if(moeda == 3)
    {
        cout << "Converter euro para reais ou dolar(1 ou 2): ";
        cin >> moeda2;
        if(moeda2 == 1)
        {
            valor *= 5.5;
        }else
        {
            valor/0.92;
        }
    }

    cout << "Seu dinheiro convertido vale " << valor<<endl;
    
    return 0;
}