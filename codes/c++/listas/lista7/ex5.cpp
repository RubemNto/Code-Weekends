#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    float peso, altura, imc;
    
    cout<<"Seu peso: ";
    cin >> peso;
    
    cout<< "Sual altura: ";
    cin >> altura;

    imc = peso/(altura*altura);

    if (imc < 18.5)
    {
        cout<<"abaixo do peso";
    }else if (imc >= 18.5 && imc <25)
    {
        cout<<"peso normal";
    }else if (imc >= 25 && imc <30)
    {
        cout<<"acima do peso";
    }else
    {
        cout<<"Obeso";
    }
    return 0;
}