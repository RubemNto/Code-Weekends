#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    int idade;
    char sexo[3] = {'H', 'M', ' '};
    string name[10];

    for (size_t i = 0; i < 10; i++)
    {
        cout << "Sexo(homem = H, mulher = M): "; 
        cin>> sexo[2];

        cout << "Idade: "; 
        cin>> idade;

        cout << "Nome: ";
        cin >> name[i];

        if ((toupper(sexo[2]) == 'H') || idade >12 && idade < 59)
        {
            cout << "Você não pode participar"<<endl;
        }else
        {
            cout << "Você pode participar"<<endl;
        }
        
        
    }
    
    
    return 0;
}