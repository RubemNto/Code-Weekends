#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    string nome, primeiro;

    cout <<"Digite um nome: ";
    cin >> nome;

    primeiro = nome;

    for (size_t i = 2; i <= 5; i++)
    {
        cout <<"Digite um nome: ";
        cin >> nome;
        if (nome < primeiro)
        {
            primeiro = nome;
        }        
    }

    cout << "Primeiro nome: " << primeiro << endl;
    
    
    return 0;
}