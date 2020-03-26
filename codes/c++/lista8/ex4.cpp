#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    int idade, taxa;
    taxa = 220;

    cout << "idade: ";
    cin >> idade;
    if(idade > 60)
    {
        cout << "valor do plano = "<< taxa + 250;
    }
    else if(idade<=60 && idade >=31)
    {
        cout << "valor do plano = "<< taxa + 195;
    }
    else if(idade<=30 && idade >=10)
    {
        cout << "valor do plano = "<< taxa + 150;
    }else if(idade < 10)
    {
        cout << "valor do plano = "<< taxa + 80;
    }else 
        cout<<"isso n conta";
    return 0;
}