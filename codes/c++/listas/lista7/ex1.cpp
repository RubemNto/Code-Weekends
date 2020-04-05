#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    int num;
    setlocale(LC_ALL,"ptb");
    cout<<"Valor de número: ";
    cin >> num;

    if (num%2 == 0)
    {
        cout << "seu numero é par";
    }else
    {
        cout << "seu número é impar";
    }   
    
    return 0;
}