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
        //int pos;
        for (size_t i = 1; i <= numLinhas-1; i+=2)
        {
            drawAsteris[0] = i;
            while(drawAsteris[0] !=0)
            {
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
    for (size_t i = numLinhas-2; i < 0; i-=2)
        {
            drawAsteris[1] = i;
            while(drawAsteris[1] !=0)
            {                
                cout << aster;
                drawAsteris[1]--;
            }
            cout<<endl;
        }
            
    
    return 0;
}