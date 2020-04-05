#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    
    float salario, desconto;
    float taxaDesconto = 0.11;;

    cout << "salario: "<< flush;
    cin >> salario;

    desconto = salario * taxaDesconto;

    if (desconto <= 318.10)
    {
        salario-=desconto;        
    }else
    {
        salario-=318.10;        
    }

    cout << "Seu salário: "<< salario << endl;
    
    return 0;
}