#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    srand(time(0));

    int cartela[5][5];
    int num;
    bool encontrado;

    cout<<"Sua cartela de Bingo"<<endl<<endl;

    
    for (int l1 = 0; l1 < 5; l1++)
    {
        for (int c1 = 0; c1 < 5; c1++)
        {
            do
            {
            encontrado = false;
            cartela[c1][l1] = rand()%25;            

            for (int l2 = 0; l2 <= l1 ; l2++)
            {
                for (int c2 = 0; (c2 < c1 && l1 == l2) ||
                (c2 < 5 && l2 < l1); c2++)
                {
                    if(cartela[c1][l1] == cartela[c2][l2])
                    {
                        encontrado = true;
                        break;
                    }            
                }
                if(encontrado)
                {
                    break;
                }
            }
            }while (encontrado);            
        }
    }
    


    for (int l = 0; l < 5; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            cout << cartela[l][c]<<"\t";
        }
        cout<<endl;
    }

    

    return 0;
}