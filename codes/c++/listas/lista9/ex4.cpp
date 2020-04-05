#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    srand(time(0));
    int jogadas[5] = {1,2,3,4,5};
    int jogadaDoPlayer, jogadaDoComutador;

    cout << "Qual é sua jogada? Pedra(1), papel(2), tesoura(3), spock(4) ou lagarto(5)"<<flush;
    cin >> jogadaDoPlayer;

    jogadaDoComutador = rand()% 4+1;

    //jogador joga tesoura
    if (jogadaDoPlayer == 3)
    {
        if (jogadaDoComutador == 2 || jogadaDoComutador == 5)
        {
            cout << "Você ganhou"<<endl;
        }else if (jogadaDoComutador == 1 || jogadaDoComutador == 4)
        {
            cout << "você perdeu"<<endl;
        }else
        {
            cout << "empate";
        }
    }

    //jogador joga pedra
    if (jogadaDoPlayer == 1)
    {
        if (jogadaDoComutador == 3 || jogadaDoComutador == 5)
        {
            cout << "Você ganhou"<<endl;
        }else if (jogadaDoComutador == 2 || jogadaDoComutador == 4)
        {
            cout << "você perdeu"<<endl;
        }else
        {
            cout << "empate";
        }
    }

    //jogador joga papel
    if (jogadaDoPlayer == 2)
    {
        if (jogadaDoComutador == 1 || jogadaDoComutador == 4)
        {
            cout << "Você ganhou"<<endl;
        }else if (jogadaDoComutador == 3 || jogadaDoComutador == 5)
        {
            cout << "você perdeu"<<endl;
        }else
        {
            cout << "empate";
        }
    }

    //jogador joga spock
    if (jogadaDoPlayer == 4)
    {
        if (jogadaDoComutador == 1 || jogadaDoComutador == 3)
        {
            cout << "Você ganhou"<<endl;
        }else if (jogadaDoComutador == 2 || jogadaDoComutador == 5)
        {
            cout << "você perdeu"<<endl;
        }else
        {
            cout << "empate";
        }
    }

    //jogador joga lagarto
    if (jogadaDoPlayer == 5)
    {
        if (jogadaDoComutador == 4 || jogadaDoComutador == 2)
        {
            cout << "Você ganhou"<<endl;
        }else if (jogadaDoComutador == 1 || jogadaDoComutador == 3)
        {
            cout << "você perdeu"<<endl;
        }else
        {
            cout << "empate";
        }
    }    
    return 0;
}