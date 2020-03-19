#include <iostream>
#include <ctime>
#include <string>

using namespace std;

float alturaCm;
float alturaM;

void convertHight()
{
    alturaM = alturaCm/100; 
}

int main()
{
    cout << "Qual o valor de sua altura em cm?\n"
         << "Altura: " << flush;
    cin >> alturaCm;
    convertHight();
    cout << "Sua altura em metros --> " << alturaM;
    return 0;
}

