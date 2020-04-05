#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    float gA,gB,gC;
    float notaFinal;
    int opcao;

    cout<<"Grau A: ";
    cin>>gA;

    cout<<"Grau B: ";
    cin>>gB;

    notaFinal = (gA + 2*gB)/3;

    if (notaFinal>=6)
    {
        cout<<"Parabéns vc passou";
    }else
    {
        cout<<"Você precisa fazer o grau C\n";
        cout<<"Nota do grau C";
        cin >> gC;

        cout<<"Qual nota quer substiruir: ";
        cin >> opcao;

        if (opcao == 1)
        {
            gA = gC;
            notaFinal = (gA + 2*gB)/3;            
        }else if (opcao == 2)
        {
            gB = gC;
            notaFinal = (gA + 2*gB)/3;
        }

        if (notaFinal>=6)
        {
            cout<<"Parabéns vc passou";
        }else 
        {
            cout << " você está reprovado";
        }
    
    

    return 0;
}