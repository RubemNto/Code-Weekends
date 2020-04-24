#include <iostream>
#include <string>

using namespace std;
int main()
{
    setlocale(LC_ALL, "ptb");

    int numeros[5] = {0};
    float soma = 0, multiplicacao = 1;

    for (int i = 0; i < 5; i++)
    {
        cout<<"Número: ";
        cin >> numeros[i];

        soma+=numeros[i];
        multiplicacao*=numeros[i];
    }

    cout<<"soma: "<<soma<<endl
        <<"multiplicação: "<<multiplicacao;
    
       
    return 0;
}