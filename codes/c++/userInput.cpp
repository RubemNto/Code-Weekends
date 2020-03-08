#include <iostream>
#include <stdio.h>

using namespace std;

int number;
//int number2 = 0;
//int numeros[5] = {1,2,3,4,5};
int main()
{
        //introduzir jogador aos numeros
    cout << "what is your favorite number?" <<endl;
    cout << "number: " << flush;
    cin >> number;
    // cout << "nice number: " << number << endl;
        //analizar se escreveu um número 
    if (number <= 0 || number >= 0)
    {
        cout << "I loved your number, " << number << " is my favorite too" << endl;
    }else if(number == 0)
    {
        cout << "that is not a number" << endl;
        cin >> number;
    }  
    return 0;
}