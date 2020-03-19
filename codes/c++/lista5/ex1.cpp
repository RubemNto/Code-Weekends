#include <iostream>
#include <stdio.h>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    float massa;
    cout << "Massa do prato em gramas: ";
    cin >> massa;
    massa = (massa *45)/1000;
    cout << "Custo do prato: " << massa;
}