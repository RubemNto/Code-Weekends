#include <iostream>
#include <ctime>
#include <string>

using namespace std;

float tempo;

int main()
{
    cout << "Tempo em minutos: ";
    cin >> tempo;

    tempo *= 60;

    cout << "Seu tempo em segundos: " << tempo;

    return 0;
}