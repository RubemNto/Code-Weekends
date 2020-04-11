#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    int numLinhas = 0;
    int drawAsteris[2];
    char aster = '*';
    
    //saber numero de linhas
    if(numLinhas == 0)
    {
        while(numLinhas%2 == 0)
        {
            cout << "Número de linhas: ";
            cin >> numLinhas;
        }
    }
    cout << endl;
    
    //desenhar de cima até o meio
        
        int numEspacos = ((numLinhas/2.0)+0.5)/1;
        for (size_t i = 1; i <= numLinhas-1; i+=2)//escolher as linhas
        {
            drawAsteris[0] = i;
            
            for (size_t e = 0; e < numEspacos-1 ; e++)
            {
                cout<< " ";
            }
            numEspacos--;
            while(drawAsteris[0] !=0)//desenha os asteriscos
            {
                //numLinhas2 = ((numLinhas/2.0)+0.5);
                cout << aster;
                drawAsteris[0]--;
            }
            cout<<endl;
        }
            
    //desenhar linha meio
    
        for (size_t c = 0; c < numLinhas; c++)
        {
            cout << aster;
        }
        cout << endl;
           
    
    //desenhar do meio até baixo

    while (numLinhas-2 > 0)
    {
        int pos;
        pos++;
        //espacos do meio ate o fim
            for (size_t i = 0; i < pos; i++)
            {
                cout<< " ";
            }

        for (size_t b = 3 ; b <= numLinhas; b++)
        {
            cout << aster;
        }
        cout<<endl;
        numLinhas-=2;        
    }
    
    return 0;
}