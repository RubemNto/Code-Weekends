#include <iostream>
#include <ctime>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL , "ptb");

    int tempo[5] = {0,0,0,0,0};
    float m1,m2, m3;

    cout << "Hora de chegada: ";
    cin >> tempo[0];

    cout << "Minuto de chegada: ";
    cin>>tempo[1];

    tempo[0] = tempo[0]*60;
    m1 = tempo[1] + tempo[0];

    cout << "Hora de saída: ";
    cin >> tempo[2];

    cout << "Minuto de saída: ";
    cin>>tempo[3];

    tempo[2] = tempo[2]*60;
    m2 = tempo[3] + tempo[2];

    m3 = m2 - m1;

    cout << "valor para pagar é: " << m3 * 0.1;   
    
    return 0;
}