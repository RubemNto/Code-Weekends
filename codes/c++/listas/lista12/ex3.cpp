#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL,"ptb");

    int numAlunos;
    float media, mediaFinal;
    char notaSubstituir;    

    cout << "Número de alunos: ";
    cin >> numAlunos;

    float grauA[numAlunos];
    float grauB[numAlunos];

    for (size_t i = 0; i < numAlunos; i++)
    {
        cout<< "Aluno " << i+1 << endl
            << "Nota grau A: ";
        cin >> grauA[i];

        cout<< "Nota grau B: ";
        cin >> grauB[i];

        media = (grauA[i] + (2*grauB[i]))/3.0;

        if (media >=6)
        {
            cout << "Aluno"<< i+1 << " aprovado, sua nota foi " << media<<endl;
            mediaFinal+=media;
        }else
        {
            cout << "Aluno " << i+1 << " reprovado, substituir qual nota com grau C, A ou B ?";
            cin >> notaSubstituir;
            if (toupper(notaSubstituir) == 'A')
            {
                cout << "Nova nota do grau A: ";
                cin >> grauA[i];
                media = (grauA[i] + (2*grauB[i]))/3.0;
                mediaFinal += media;
                if (media >=6)
                {
                    cout << "Aluno"<< i+1 << " aprovado, sua nota foi " << media<<endl;                    
                }else
                {
                    cout << "Aluno " << i+1 << " reprovado"<<endl;
                }
            }else if (toupper(notaSubstituir) == 'B')
            {
                cout << "Nova nota do grau B: ";
                cin >> grauB[i];
                media = (grauA[i] + (2*grauB[i]))/3.0;
                mediaFinal += media;
                if (media >=6)
                {
                    cout << "Aluno"<< i+1 << " aprovado, sua nota foi " << media<<endl;                    
                }else
                {
                    cout << "Aluno " << i+1 << " reprovado"<<endl;
                }
            }
        }
    }

    cout << endl << "Média dos alunos é: " << mediaFinal/(numAlunos*1.0)<<endl;
    
    return 0;
}