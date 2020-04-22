#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    srand(time(0));
    int tabela[3][7];
    int vendas[6]= {0};
    int vendas2[3] = {0};
    string respostasNome[4];
    int respostas[4] = {0};

    for (int t = 0; t < 3; t++)
    {
        for (int d = 0; d < 6; d++)
        {
            tabela[t][d] = rand()%200;
        }        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int c = 0; c < 6; c++)
        {
            vendas2[i] += tabela[i][c];
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        tabela[i][6] = vendas2[i];
    }    
    

    cout<<"             Tabela de Dias por turnos"<<endl;
    cout<<"         S      T       Q       Q       S       S  total da semana"<<endl<<endl;
    for (int t = 0; t < 3; t++)
    {
        if(t==0)
        {
            cout<<"Manhã    ";
        }else if(t == 1)
        {
            cout<<"Tarde    ";
        }else
        {
            cout<<"Noite    ";
        }
        
        for (int d = 0; d < 7; d++)
        {
            cout<< tabela[t][d]<<"\t"; 
        }
        cout<<endl;
    }
    cout<<endl<<"Vendas"<<endl<< "do dia:  ";

    for (int d = 0; d < 6; d++)
    {
        for (int t = 0; t < 3; t++)
        {
            vendas[d] += tabela[t][d]; 
        }        
    }

    for (int i = 0; i < 6; i++)
    {
        cout<< vendas[i]<<"\t";
    }
    cout<<endl<<endl;


    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            respostas[0] = vendas2[i];//turnos
            respostas[1] = vendas2[i];
        }else
        {
            if(vendas2[i] > respostas[0])
            {
                respostas[0] = vendas2[i];
            }else if (vendas2[i] < respostas[1])
            {
                respostas[1] = vendas2[i];
            }            
        }        
    }

    for (int i = 0; i < 6; i++)
    {
        if (i == 0)
        {
            respostas[2] = vendas[i];//turnos
            respostas[3] = vendas[i];
        }else
        {
            if(vendas[i] > respostas[2])
            {
                respostas[2] = vendas[i];
            }else if (vendas[i] < respostas[3])
            {
                respostas[3] = vendas[i];
            }            
        }        
    }

// turnos    
    if(respostas[0] == vendas2[0])
    {
        respostasNome[0] = "Manhã";
    }else if(respostas[0] == vendas2[1])
    {
        respostasNome[0] = "Tarde";
    }else
    {
        respostasNome[0] = "Noite";
    }

    if(respostas[1] == vendas2[0])
    {
        respostasNome[1] = "Manhã";
    }else if(respostas[1] == vendas2[1])
    {
        respostasNome[1] = "Tarde";
    }else
    {
        respostasNome[1] = "Noite";        
    }

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int r = 0; r < 2; i++)
    //     {
    //         if(respostas[i] == vendas2[r])
    //         {
    //             respostasNome[i] = "Manhã";
    //         }else if(respostas[i] == vendas2[r])
    //         {
    //             respostasNome[i] = "Tarde";
    //         }else
    //         {
    //             respostasNome[i] = "Noite";
    //         }
    //     }
        
    // }
    

//dias
    
    if(respostas[2] == vendas[0])
    {
        respostasNome[2] = "Segunda";
    }else if(respostas[2] == vendas[1])
    {
        respostasNome[2] = "Terça";
    }else if(respostas[2] == vendas[2])
    {
        respostasNome[2] = "Quarta";
    }else if(respostas[2] == vendas[3])
    {
        respostasNome[2] = "Quinta";
    }else if(respostas[2] == vendas[4])
    {
        respostasNome[2] = "Sexta";
    }else if(respostas[2] == vendas[5])
    {
        respostasNome[2] = "Sábado";
    }

    if(respostas[3] == vendas[0])
    {
        respostasNome[3] = "Segunda";
    }else if(respostas[3] == vendas[1])
    {
        respostasNome[3] = "Terça";
    }else if(respostas[3] == vendas[2])
    {
        respostasNome[3] = "Quarta";
    }else if(respostas[3] == vendas[3])
    {
        respostasNome[3] = "Quinta";
    }else if(respostas[3] == vendas[4])
    {
        respostasNome[3] = "Sexta";
    }else if(respostas[3] == vendas[5])
    {
        respostasNome[3] = "Sábado";
    }    

cout<<"Turno com maior numero de vendas: "<<respostasNome[0]<<endl
        <<"Turno com menor numero de vendas: "<<respostasNome[1]<<endl
        <<"Dia da semana com maior numero de vendas: "<<respostasNome[2]<<endl
        <<"Dia da semana com menor numero de vendas: "<<respostasNome[3]<<endl;    
    return 0;
}