#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    srand(time(0));
    
    char jogoDaVelha[3][3][3];
    int posX = 0, posY = 0, posZ = 0;
    
    for(int ca = 0; ca < 3; ca++)
    {
        for (int l = 0; l < 3; l++)//setar jogo inicial
        {
            for (int c = 0; c < 3; c++)
            {
                jogoDaVelha[l][c][ca] = '*';
            }
            
        }
    }

    cout<<"Jogo da velha 3D"<<endl
        <<"Regras: "<<endl
        <<"1) Os * da matriz abaixo correspondem aos locais onde pode marcar sua pos com 'X' ou 'O' dada sua cordenada para x e y da camada escolhida"<<endl<<"     (obs: a contagem das linhas e colunas tem inicio com 0) "<<endl
        <<"2) Para vencer devem fazer a mesma coisa como no jogo da velha normal, cobrir uma linha, coluna ou diagonal com seu num"<<endl
        <<endl<<"Bom jogo!"<<endl<<endl;

    
    for(int ca = 0; ca < 3; ca++)
    {
        for (int l = 0; l < 3; l++)//desenhar jogo da velha inicial com os 0 nas pos 
        {
            for (int c = 0; c < 3; c++)
            {
                cout << jogoDaVelha[l][c][ca]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    
    cout<<endl<<endl;

    int randomPlayer = rand()%2+1;
    char letra;
    char valorP1[3] = {};
    char valorP2[3] = {};
  
        for (int j = 0; j < 9; j++)//realiza o jogo e troca os jogadores
        {
        //comparacao
            for (int dP = 0; dP < 3; dP++) // testar DP
            {
                valorP1[dP] =jogoDaVelha[dP][dP][posZ];
                valorP2[dP] =jogoDaVelha[dP][dP][posZ];

                if (valorP1[0] == 'X' && valorP1[1] == 'X' && valorP1[2] == 'X')
                {
                    cout<<endl<<"Vencedor: jogador X"<<endl;
                    return 0;
                }else if(valorP2[0] == 'O' && valorP2[1] == 'O' && valorP2[2] == 'O')
                {
                    cout<<endl<<"Vencedor: jogador O"<<endl;
                    return 0;
                }
            }

            for (int i = 0; i < 3; i++)
            {
                valorP1[i] = {};
                valorP2[i] = {};
            }
            

            for (int dP = 0, dS = 2; dP < 3; dP++, dS--) // testar DS
            {
                valorP1[dP] = jogoDaVelha[dP][dS][posZ];
                valorP2[dP] = jogoDaVelha[dP][dS][posZ];

                if (valorP1[0] == 'X' && valorP1[1] == 'X' && valorP1[2] == 'X')
                {
                    cout<<endl<<"Vencedor: jogador X"<<endl;
                    return 0;
                }else if(valorP2[0] == 'O' && valorP2[1] == 'O' && valorP2[2] == 'O')
                {
                    cout<<endl<<"Vencedor: jogador O"<<endl;
                    return 0;
                }
            }

            for (int i = 0; i < 3; i++)
            {
                valorP1[i] = {};
                valorP2[i] = {};
            }

            for (int l = 0; l < 3; l++)//testar linhas
            {
                for (int c = 0; c < 3; c++)
                {
                    valorP1[c] = jogoDaVelha[l][c][posZ];
                    valorP2[c] = jogoDaVelha[l][c][posZ];

                    if (valorP1[0] == 'X' && valorP1[1] == 'X' && valorP1[2] == 'X')
                    {
                        cout<<endl<<"Vencedor: jogador X"<<endl;
                        return 0;
                    }else if(valorP2[0] == 'O' && valorP2[1] == 'O' && valorP2[2] == 'O')
                    {
                        cout<<endl<<"Vencedor: jogador O"<<endl;
                        return 0;
                    }
                }
                
            }

            for (int i = 0; i < 3; i++)
            {
                valorP1[i] = {};
                valorP2[i] = {};
            }

            for (int c = 0; c < 3; c++)//testar colunas
            {
                for (int l = 0; l < 3; l++)
                {
                    valorP1[l] = jogoDaVelha[l][c][posZ];
                    valorP2[l] = jogoDaVelha[l][c][posZ];

                    if (valorP1[0] == 'X' && valorP1[1] == 'X' && valorP1[2] == 'X')
                    {
                        cout<<endl<<"Vencedor: jogador X"<<endl;
                        return 0;
                    }else if(valorP2[0] == 'O' && valorP2[1] == 'O' && valorP2[2] == 'O')
                    {
                        cout<<endl<<"Vencedor: jogador O"<<endl;
                        return 0;
                    }
                }
                
            }

            for (int i = 0; i < 3; i++)
            {
                valorP1[i] = {};
                valorP2[i] = {};
            }
        //jogo
            if(randomPlayer == 1)
            {
                cout<<"Jogada da letra X"<<endl;
                letra = 'X';
            }else
            {
                cout<<"Jogada da letra O"<<endl;
                letra = 'O';
            }
            cout<<"cordenada X: ";
            cin >> posX;

            cout<<"cordenada Y: ";
            cin >> posY;

            cout<<"cordenada z: ";
            cin >> posZ;

            if(jogoDaVelha[posX][posY][posZ] != '*')
            {
                cout<<"posição cupada"<<endl;
                j--;
            }else
            {
                jogoDaVelha[posX][posY][posZ] = letra;

                for(int ca = 0; ca < 3; ca++)
                {
                    for (int l = 0; l < 3; l++)//desenhar jogo da velha inicial com os 0 nas pos 
                    {
                        for (int c = 0; c < 3; c++)
                        {
                            cout << jogoDaVelha[l][c][ca]<<"\t";
                        }
                        cout<<endl;
                    }
                }

                if(randomPlayer == 1)
                {
                    randomPlayer = 2;
                }else
                {
                    randomPlayer = 1;
                }
            }
        }

    return 0;
}