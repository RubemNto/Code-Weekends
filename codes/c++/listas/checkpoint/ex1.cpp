#include <iostream>

using namespace std;

int main()
{
    /*Digite um valor inicial e um valor final. 
    Descubra entre os valores informados:*/

    setlocale(LC_ALL, "ptb");
    //variaveis e sequencia
        signed int nI = 0;
        signed int nF = 0;
        int elemento = 0;
        
        float respostas[5] ={0,0,0,0,0};

        cout << "Valor inicial da sequência: ";
        cin >> nI;

        cout << "Valor final da sequência: ";
        cin >> nF;

        cout<<"Sua sequência abaixo"<<endl;

        int sequencia[((nF-nI)+1)+1];

        for(int i = nI; i <= nF ; i++)
        {
            cout << i << " . ";
            sequencia[elemento] = i;
            elemento++;
        }

    //exercicio A
        for(int i = nI; i <= nF ; i++)
        {
            if (i%2 == 0)//pares
            {
                respostas[0]++;
            }
        }

        cout<<endl
            <<"Número de pares na sequência: "
            <<respostas[0]<<endl;

    //exercicio B
        for(int i = nI; i <= nF ; i++)
        {
            if (i < 0)//negativos
            {
                respostas[1]++;
            }
        }

        cout<<endl
            <<"Número de negativos na sequência: "
            <<respostas[1]<<endl;

    //exercicio C
        for(int i = nI; i <= nF ; i++)
        {
            if (i%5 == 0 && i%7 == 0)//multiplos de 5 e 7 ao mesmo tempo
            {
                respostas[2]++;
            }
        }

        cout<<endl
            <<"Número múltiplos de 5 e por 7 na sequência: "
            <<respostas[2]<<endl;

    //exercicio D
        for(int i = nI; i <= nF ; i++)
        {
            respostas[3]+= i;
        }

        cout<<endl
            <<"Soma da sequência: "
            <<respostas[3]<<endl
            <<"Média da sequencia: "
            <<respostas[3]/elemento<<endl;

    //exercicio E
        cout<<"Centro da sequência: "
            <<(nI+nF)/2.0<<endl;
    return 0;
}