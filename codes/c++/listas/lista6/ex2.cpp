#include <iostream>
#include <ctime>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    float numeroDeAlunos;
    float numG, numI, numNH, numJ, nenhum;
    float pA,pB,pC,pD,pE;

    cout << "número de alunos: ";
    cin >> numeroDeAlunos;

    cout << "número de torcedores Grêmio: ";
    cin >> numG;
    pA = numG/numeroDeAlunos*100.0;
    
    cout << "número de torcedores Internacional: ";
    cin >> numI;
    pB = numI/numeroDeAlunos*100.0;

    cout << "número de torcedores Novo Hamburgo: ";
    cin >> numNH;
    pC = numNH/numeroDeAlunos*100.0;

    cout << "número de torcedores Juventude: ";
    cin >> numJ;
    pD = numJ/numeroDeAlunos*100.0;

    cout << "número de torcedores de nada: ";
    cin >> nenhum;
    pE = nenhum/numeroDeAlunos*100.0;

    cout << "porcentagem de gremistas: " << pA << "%\n"; 
    cout << "porcentagem de colorados: " << pB<< "%\n"; 
    cout << "porcentagem de Novo Hamburgos: " << pC<< "%\n"; 
    cout << "porcentagem de Juventudes: " << pD<< "%\n"; 
    cout << "porcentagem de pessoas sem time: " << pE<< "%\n"; 

    return 0;
}