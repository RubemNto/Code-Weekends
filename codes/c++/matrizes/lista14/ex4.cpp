#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    char linhasM1;//linhas matriz a
    char colunas;//colunas matriz a e linhas matriz B
    char colunasM2;//colunas matriz B
   srand(time(0));

    while(!isdigit(linhasM1))
    {
        cout<<"Num linhas matriz A: ";
        cin >> linhasM1;
    }

    linhasM1-=48;

    while (!isdigit(colunas))
    {
        cout<<"Num que vai ser colunas da matriz A e linhas da matriz B: ";
        cin >> colunas;
    }
    
    colunas-=48;

    while(!isdigit(colunasM2))
    {
        cout<<"Num colunas matriz B: ";
        cin >> colunasM2;
    }
    colunasM2-=48;

    int matrizA[linhasM1][colunas];
    int matrizB[colunas][colunasM2];

    int matrizP[linhasM1][colunasM2] = {0};

    for (int l = 0; l < linhasM1; l++)
    {
        for (int c = 0; c < colunas; c++)
        {
            matrizA[l][c] = rand()%2;
        }        
    }

    for (int l = 0; l < linhasM1; l++)
    {
        for (int c = 0; c < colunas; c++)
        {
            cout << matrizA[l][c]<<"\t";
        }        
        cout<<endl;
    }
    cout<<endl;
    for (int l = 0; l < colunas; l++)
    {
        for (int c = 0; c < colunasM2; c++)
        {
            matrizB[l][c] = rand()%5;
        }        
    }

    for (int l = 0; l < colunas; l++)
    {
        for (int c = 0; c < colunasM2; c++)
        {
            cout << matrizB[l][c]<<"\t";
        }        
        cout<<endl;
    }
    cout<<endl;

    //produto
    int yB=0;
    int fazendo = 0;

    for (int l = 0; l < linhasM1; l++)//checar linhas
    {
        for (int c = 0; c < colunasM2; c++)//checar colunas
        {
            for (int i = 0; i < colunasM2; i++)//relizar a conta
            {
                matrizP[l][c]+=matrizA[l][i]*matrizB[i][c];
            }            
        }
    }
    

    for (int l = 0; l < linhasM1; l++)
    {
        for (int c = 0; c < colunasM2; c++)
        {
            cout << matrizP[l][c]<<"\t";
        }        
        cout<<endl;
    }

    /*
    00 01 02
    10 11 12
    20 21 22
    */
    

    return 0;
}