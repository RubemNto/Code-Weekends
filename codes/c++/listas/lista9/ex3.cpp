#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    srand(time(0));
    int faces, valor;
    cout << "Quantas faces possui seu dado?"<<endl;
    cin >> faces;

    valor = rand() % (faces-1) + 1;

    cout <<"Seu dado deu " << valor << endl;

    return 0;



}