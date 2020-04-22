#include <iostream>

using namespace std;

int main()
{
    char ordem;
    int valor1=0,valor2=0;
    bool testes[3] = {false};

    while(!isdigit(ordem))
    {
        cout<<"ordem da matriz: ";
        cin >> ordem;
    }

    ordem-=48;


    int matriz[ordem][ordem];

    for(int l = 0; l < ordem; l++)
    {
        for (int c = 0; c < ordem; c++)
        {
            cout<< "valor para linha "<<l<< " e coluna "<< c<<":";
            cin >> matriz[l][c];
        }        
    }
    cout<<endl;

    for (int i = 0; i < ordem; i++)
    {
        for (int x = 0; x < ordem; x++)
        {
            cout << matriz[i][x]<<"\t";
        }
        cout<<endl<<endl;
    }
    cout<<endl;

    for (int l = 0; l < ordem; l++)//diagonal principal usado como base
    {
        valor1 += matriz[l][l];
    }
    

    for (int l = 0; l < ordem; l++)//testar linhas
    {
        for (int c = 0; c < ordem; c++)
        {
            valor2 += matriz[l][c];
        }

        if(valor2 == valor1)
        {
            testes[0] = true;
        }else
        {
            testes[0] = false;
        }
        valor2 = 0;        
    }

    valor2 = 0;

    for (int c = 0; c < ordem; c++)//testas colunas
    {
        for (int l = 0; l < ordem; l++)
        {
            valor2 += matriz[l][c];
        }

        if(valor2 == valor1)
        {
            testes[1] = true;
        }else
        {
            testes[1] = false;
        }
        valor2 = 0;        
    }
    
    valor2 = 0;
    
    for (int sobi = 0,cai = ordem-1; sobi < ordem; sobi++ , cai--)//diagonal secundaria
    {
        valor2 +=matriz[sobi][cai];

        if(valor2 == valor1)
        {
            testes[2] = true;
        }else
        {
            testes[2] = false;
        }        
    }

    if(testes[0] && testes[1] && testes[2])
    {
        cout<<"Cubo magico de valor "<<valor1;
    }else
    {
        cout << "matriz simples";
    }
    


    

    

    

    
    
    return 0;
}