#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    int numLinhas, drawAsteris;
    char aster = '*';

    cout << "Número de linhas: ";
    cin >> numLinhas;

    for (size_t i = 1; i <= numLinhas; i++)
    {
        drawAsteris = i;
        while(drawAsteris !=0 )
        {
            cout << aster;
            drawAsteris--;
        }
        cout<<endl;
    }
    
    return 0;
}