#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    Faça um programa que simule uma urna eletrônica, da seguinte maneira:
• Menu de opções
o (V)otar (candidatos K – Kirby, L – Link, M – Mario, S – Sonic; B é branco; N é nulo)
o (T)erminar a votação
• Se for escolhida a opção votar, obter o voto usuário (até ele digitar uma opção válida). Se ele
digitar uma opção inválida, imprimir aviso na tela e solicitar novo número. Se ele digitar uma
opção válida, agradecer e mostrar novamente o menu de opções
• Se for escolhida a opção terminar o programa
o Exibir a contagem dos votos para cada candidato
o Determinar o vencedor
o Sair do programa
• Se o usuário digitou uma opção inválida (diferente de V ou T), então dar um aviso e solicitar
novamente uma opção, até ser válida
    */
    setlocale(LC_ALL, "ptb");

    char urna, voto;
    bool votando=true, errou = true;
    string vencedor;
    int votos[6] = {0,0,0,0,0,0};
    string candidatos[4] = {"Kirby", "Link", "Mario", "Sonic"};


    while (votando)
    {
        cout<<"Votar(V) ou Terminar(T)"<<endl;
        cin >> urna;
        if(toupper(urna) == 'V')
        {
            while(errou){            
                cout << "(candidatos--> (K) – Kirby, (L) – Link, (M) – Mario, (S) – Sonic; (B) é branco; (N) é nulo)";
                cin >> voto;
                errou = false;
            }
            if(toupper(voto) == 'K')
            {
                votos[0]++;
            }else if(toupper(voto) == 'L')
            {
                votos[1]++;
            }else if(toupper(voto) == 'M')
            {
                votos[2]++;
            }else if(toupper(voto) == 'S')
            {
                votos[3]++;
            }else if(toupper(voto) == 'B')
            {
                votos[4]++;
            }else if(toupper(voto) == 'N')
            {
                votos[5]++;
            }else
            {
                cout << "Opção Inválida"<<endl;
                errou = true;
            }
            
            

        }else if (toupper(urna) == 'T')//parando de votar
        {

            cout << "Votos"<<endl
                 << "Kirby: "<<votos[0]<<endl
                 << "Link:  "<<votos[1]<<endl
                 << "Mario: "<<votos[2]<<endl
                 << "Sonic: "<<votos[3]<<endl
                 << "Branco:"<<votos[4]<<endl
                 << "Nulo:  "<<votos[5]<<endl<<endl;

            for (size_t i = 0; i < 4; i++)
            {
                if(i==0)
                {
                    if(votos[i] == votos[i+1]&& votos[i] == votos[i+2]&& votos[i] == votos[i+3] )   
                    {
                        cout << "Não há Vencedor" << endl;
                    }else if (votos[i] > votos[i+1]&& votos[i] > votos[i+2]&& votos[i] > votos[i+3]) //compara ao kirby
                    {
                        vencedor = candidatos[i];
                    } 
                }else if(votos[i] > votos[0] && votos[i] > votos[i+1] && votos[i] > votos[i+2]) // compara ao link
                {
                    vencedor = candidatos[i];

                }else if(votos[i] > votos[0] && votos[i] > votos[i-1] && votos[i] > votos[i+1]) // compara ao mario
                {
                    vencedor = candidatos[i];

                }else if(votos[i] > votos[0] && votos[i] > votos[i-2] && votos[i] > votos[i-1]) // compara ao sonic
                {
                    vencedor = candidatos[i];
                }
            }
            //declarando vencedor
            cout << "Vencedor: " << vencedor<<endl;
            votando = false;
        }else
        {
            cout << "Opção Inválida"<<endl;            
        }
        
    }
    
    

    

    return 0;
}