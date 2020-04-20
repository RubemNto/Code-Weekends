/*
Faça um programa que preencha uma matriz 4x5 com números inteiros randômicos.
Mostre essa matriz na tela e informe a posição e o valor do maior e do menor número
encontrado.
*/
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    srand(time(0));

    int matriz[4][5];
    int numPosiveisDaMatriz[20];

    /*
    00 01 02
    10 11 12
    30 31 32
        .
        .
        .
        n
    */

   for (int l = 0; l < 4; l++)
   {
       for (int c = 0; c < 5; c++)
       {
           matriz[l][c] = rand()%2;
       }       
   }
   
   for(int l = 0; l < 4 ; l++)
   {
       for (int c = 0; c < 5; c++)
       {
           cout << matriz[l][c]<<"\t";
       }
       cout<<endl;
       
   }


    return 0;
}