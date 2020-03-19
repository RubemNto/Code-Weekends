#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    string avista;
    string dinheiro;
    float valor;
    int vezes;

    setlocale(LC_ALL, "ptb");

    cout<< "Valor da compra: ";
    cin >> valor;

    cout << "À vista?(s ou n)\n";
    cin >> avista;

    cout << "Com Dinheiro?(s ou n)\n";
    cin >> dinheiro;

    if (dinheiro == "n")
    {
        cout<<"Em quantas vezes, 2 ou 3?"<<endl;
        cin >> vezes;
    }
    

    if (avista == "s" && dinheiro== "s")
    {
        cout << "Você recebeu 15 porcento de desconto\n"<<
        "Valor à pagar: "<< valor * 0.85;
    }else if (avista == "s" && dinheiro=="n")
    {
        cout << "Você recebeu 10 porcento de desconto\n"<<
        "Valor à pagar: "<< valor * 0.90;
    }else if(avista == "n" && dinheiro=="n" && vezes ==2)
    {
        cout << "Você pagou o valor integral de " << valor<<" reais"; 

    }else if(avista == "n" && dinheiro== "n" && vezes ==3)
    {
        cout << "Você vai para com juros de 10 porcento, "<< valor *1.1;
    }
    
    return 0;
}