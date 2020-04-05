#include <iostream>
#include <ctime>
#include <stdio.h>

using namespace std;

int main()
{
    float n1,n2,n3, media;

    cout << "primeira nota: ";
    cin >> n1;

    cout << "segunda nota: ";
    cin >> n2;

    cout << "Terceira Nota: ";
    cin >> n3;

    media = (n1*2 + n2*3 + n3*5)/10;

    cout << "Sua média é: " << media;
    return 0;
}