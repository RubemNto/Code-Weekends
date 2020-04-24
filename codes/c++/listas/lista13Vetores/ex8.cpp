#include <iostream>
#include <string>

using namespace std;
int main()
{
    setlocale(LC_ALL, "ptb");

    srand(time(0));
    int valores[12] = {0};
    int num;

    for (int i = 0; i < 12; i++)
    {
        num = rand()%5;
        valores[i] = num;
        cout << valores[i]<<" ";
    }

    int e = 0;
    cout<<endl;
    for (int i = 0; i < 12; i++)
    {
        while (e < 12)
        {
            if(valores[i] == valores[e] && i!=e)
            {
                cout << valores[i]<<" posição " << i <<" é igual a "<<valores[e]<<" posição " << e<<endl<<endl;
            }
            e++;
        }
        
        e=0;
    }
    
    

    return 0;
}