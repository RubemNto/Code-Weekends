#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL,"ptb");

    int numAdvogados;
    string nome, profissao;

    //se nome == fim => parar, caso n continuar

    while(nome != "fim")
    {
        cout << "Nome: ";
        cin >> nome;

        if(nome != "fim")
        {
            cout << "Profissão: ";
            cin >> profissao;

            for (size_t i = 0; i > 0; i++)
            {
                profissao[i] = tolower(profissao[i]);
            }
            

            if (profissao == "advogado" || profissao == "advogada")
            {
                numAdvogados++;
            }
        }
    }

    cout << endl<<"Número de advogados presentes: " << numAdvogados<<endl;    

    return 0;
}