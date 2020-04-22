#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    srand(time(0));

    char tabela[5][10] = {0};
    char gabarito[10];
    int resultados[5] = {0};
    string alunos[5] = {"Aluno A: ","Aluno B: ","Aluno C: ","Aluno D: ","Aluno E: "};
    char alternativas[4] = {'a','b','c','d'};

    for (int a = 0; a < 5; a++)
    {
        for (int p = 0; p < 10; p++)
        {
            tabela[a][p] = alternativas[rand()%4];
            gabarito[p] =  alternativas[rand()%4];
        }        
    }
    cout<<"                               Tabela de perguntas da prova"<<endl<<endl;
    cout<<"         1      2       3       4       5       6       7       8       9       10"<<endl<<endl;
    for (int t = 0; t < 5; t++)
    {
        cout<<alunos[t];        
        for (int d = 0; d < 10; d++)
        {
            cout<< tabela[t][d]<<"\t"; 
        }
        cout<<endl<<endl;
    }
    cout<<endl<<"Gabarito: ";
    for (int i = 0; i < 10; i++)
    {
        cout<<gabarito[i]<<"\t";
    }
    for (int A = 0; A < 5; A++)
    {
        for (int P = 0; P < 10; P++)
        {
            if(tabela[A][P] == gabarito[P])
            {
                resultados[A]++;
            }
        }            
    }    
    cout<<endl<<endl<<"Resultados"<<endl<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<alunos[i]<<resultados[i]<<endl<<endl;
    }
    return 0;
}