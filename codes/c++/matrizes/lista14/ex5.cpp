#include <iostream>

using namespace std;

int main()
{
    char ordem;
    int valor1=0,valor2=0;
    bool testes[4] = {false};

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

    for (int i = 0; i < ordem; i++)
    {
        valor1+=matriz[0][i];
        
    }
    cout<<valor1<<endl;
    

    for (int i = 0; i < ordem; i++)
    {
        for (int x = 0; x < ordem; x++)
        {
            cout << matriz[i][x]<<"\t";
        }
        cout<<endl<<endl;
    }
    cout<<endl;
    
    for (int i = 0; i < ordem; i++)//testar linhas
    {
        for (int c = 0; c < ordem; c++)
        {
            valor2+= matriz[i][c];
        }

        if(valor2!=valor1)
        {
            testes[0] =false;
        }else
        {
            testes[0]=true;
        }
        valor2 = 0;              
    }

    for (int i = 0; i < ordem; i++)//testar colunas
    {
        for (int c = 0; c < ordem; c++)
        {
            valor2+= matriz[c][i];
        }     

        if(valor2!=valor1)
        {
            testes[1] =false;
        }else
        {
            testes[1]=true;
        }
        valor2 = 0;                 
    }

    for (int i = 0; i < ordem; i++)//testar diagonal P
    {
        valor2+=matriz[i][i];     

        if(valor2!=valor1)
        {
            testes[2] =false;
        }else
        {
            testes[2]=true;
        }                 
    }
    int digit =0;
    for (int i = ordem-1; i >= 0; i--)//testar diagonal S
    {        
        valor2+=matriz[digit][i];
        digit++;            

        if(valor2!=valor1)
        {
            testes[3] =false;
        }else
        {
            testes[3]=true;
        }                 
    }



    if(testes[0] && testes[1] && testes[2] && testes[3])
    {
        cout<<"Cubo magico";
    }else
    {
        cout << "matriz simples";
    }
    


    

    

    

    
    
    return 0;
}