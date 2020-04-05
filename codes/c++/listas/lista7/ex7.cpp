#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    string name;
    float n1,n2,n3,media;
    cout<< "Qual é o seu nome: ";
    cin >> name;

    cout<< "Nota 1:";
    cin >> n1;

    cout<< "Nota 2:";
    cin >> n2;

    cout<< "Nota 3:";
    cin >> n3;

    media = (n1*0.25+ n2*0.35 + n3*0.4);
    return 0;
}