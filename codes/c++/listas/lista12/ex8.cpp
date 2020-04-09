#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    int numLinhas = 0;
    int numLinhas2;
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
        numLinhas2 = ((numLinhas/2.0)+0.5);//metade da piramide
        int pos;
        for (size_t i = 1; i <= numLinhas-1; i+=2)//escolher as linhas
        {
            drawAsteris[0] = i;
            while(drawAsteris[0] !=0)//desenha os asteriscos
            {
                while (numLinhas2 !=0)
                {
                    cout << " ";
                    numLinhas2--;
                    pos++;
                }
                numLinhas2 = ((numLinhas/2.0)+0.5)-pos;
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
        for (size_t i = 3 ; i <= numLinhas; i++)
        {
            cout << aster;
        }
        cout<<endl;
        numLinhas-=2;        
    }
    
    return 0;
}