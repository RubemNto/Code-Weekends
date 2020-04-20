#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    srand(time(0));
    char linhasD;
    char colunasD;

    int linhas = 0, colunas = 0;
    
    while(!isdigit(linhasD) || linhasD-48 <=0)
    {
        cout<<"Num d linhas: ";
        cin >> linhasD;
    }    

    linhas = linhasD - 48;

    while(!isdigit(colunasD) || colunasD-48 <=0)
    {
        cout<<"Num d colunas: ";
        cin >> colunasD;
    }

    colunas = colunasD - 48;

    int matrizA[linhas][colunas];
    int matrizB[linhas][colunas];

    for (int l = 0; l < linhas; l++)
    {
        for (int c = 0; c < colunas; c++)
        {
            matrizA[l][c] = rand()%10+1;
            matrizB[l][c] = rand()%10+1;
        }        
    }

    for (int l = 0; l < linhas; l++)
    {
        for (int c = 0; c < colunas; c++)
        {
            cout << matrizA[l][c]<<"\t";
        }
        cout<<endl;        
    }
    cout<<endl;
    for (int l = 0; l < linhas; l++)
    {
        for (int c = 0; c < colunas; c++)
        {
            cout << matrizB[l][c]<<"\t";
        }
        cout<<endl;        
    }

    cout<<endl;

    for (int l = 0; l < linhas; l++)
    {
        for (int c = 0; c < colunas; c++)
        {
            cout << matrizB[l][c] + matrizA[l][c]<<"\t";
        }
        cout<<endl;        
    }
    
    return 0;
}