#include <iostream>
#include <string>

using namespace std;
int main()
{
    setlocale(LC_ALL, "ptb");

    float altura[10] = {0};
    float maiorAltura, alturaMedia;
    int numAlunosMaiorMedia;

    for (int i = 0; i < 10; i++)
    {
        cout << "Altura em cm: ";
        cin >> altura[i];

        alturaMedia+=altura[i];
    }

    alturaMedia/=10.0;

    for (int i = 0; i < 10; i++)
    {
        if(altura[i] > alturaMedia)
        {
            numAlunosMaiorMedia++;
        }
    }

    cout<<"Média de altura: "<<alturaMedia<<endl
        <<"Número de alunos com altura acima da média: "<<numAlunosMaiorMedia<<endl;
    return 0;
}