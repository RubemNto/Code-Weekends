#include <iostream>
#include <ctime>
#include <string>
#include <stdio.h>

using namespace std;

float grauA;
float grauB;
float notaF;

void calcularM(float grauA, float grauB)
{
    notaF = ((grauA * 1/3) + (grauB * 2/3))/3;
}

int main()
{
    // iniciar programa + receber grau A
    cout << "Calcular nota\n"
         << "grau A: " << flush;;
    cin >> grauA;
    // receber grau B
    cout << "grau B: " << flush;;
    cin >> grauB;
    calcularM(grauA, grauB);
    cout << "Sua nota final --> " << notaF;

    if (notaF >= 6)
    {
        printf(" Muito bem, passou");
    }else
    {
        printf(" Desculpe, N foi dessa vez");
    }
    return 0;
    
}


