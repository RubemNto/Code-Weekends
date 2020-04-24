/*Crie um programa para ler quinze números DIFERENTES a serem armazenados
em um vetor. Os dados deverão ser armazenados no vetor na ordem que forem
sendo lidos, sendo que caso o usuário digite um número que já foi digitado
anteriormente, o programa deverá pedir para ele digitar outro número. Note que
cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele
existe entre os números que já foram fornecidos. Exibir na tela o vetor final com
os quinze números.*/

#include <iostream>
#include <string>

using namespace std;
int main()
{
    setlocale(LC_ALL, "ptb");

    int numeros[15] = {0};
    int e = 0;
    
    for (int i = 0; i < 15; i++)
    {
        cout<<"Número da posição "<< i <<": ";
        cin >> numeros[i];
        while (e < 15)
        {
            if(numeros[i] == numeros[e] && i!=e)
            {
                cout<<"número digitado repetido"<<endl;
                i--;
                e=16;
            }
            e++;
        }
        e=0;
    }
       
    return 0;
}