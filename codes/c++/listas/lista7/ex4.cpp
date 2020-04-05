#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    string sexo;
    float pesoIdeal;
    float h;
    int num;

    
    cout<<"sexo feminino ou masculino? \n";
    cin >> sexo;
    
    if (sexo =="feminino" || sexo =="Feminino")
    {
        num++;

        cout<<"Sua altura: ";
        cin >> h;

        pesoIdeal = (62.1 * h) - 44.7;
        cout << "seu peso ideal é "<< pesoIdeal;
    }else if (sexo =="masculino" || sexo =="Masculino")
    {
        num++;

        cout<<"Sua altura: ";
        cin >> h;

        pesoIdeal = (72.7 * h) - 58;
        cout << "seu peso ideal é "<< pesoIdeal;
    }else
    {
        cout<< "Você é um ET?\n";
    }

    return 0;
}