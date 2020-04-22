#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    
    srand(time(0));

    int matriz[5][5];

    int matriz2[5][5];

    for (int l = 0; l < 5; l++)//matriz A
    {
        for (int c = 0; c < 5; c++)
        {
            matriz[l][c] = rand()%6;
        }
    }   

    for (int l = 0; l < 5; l++)//imprime a matriz A
    {
        for (int c = 0; c < 5; c++)
        {
            cout << matriz[l][c]<<"\t";
        }
        cout << endl;
    }

    cout<<endl<<"nova matriz, rotacionada sentido horario"<<endl;
    int n = 4;
    for(int l=0; l < 5 ; l++)//converter matriz A em matriz B
    {
        for (int c = 0; c < 5 ; c++)
        {
            matriz2[c][n] = matriz[l][c];
        }
        n--;        
    }

    for (int l = 0; l < 5; l++)//imprimir matriz B
    {
        for (int c = 0; c < 5; c++)
        {
            cout << matriz2[l][c]<<"\t";
        }
        cout << endl;
    }
    
    return 0;
}