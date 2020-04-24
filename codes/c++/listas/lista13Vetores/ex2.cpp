#include <iostream>
#include <string>

using namespace std;
int main()
{
    setlocale(LC_ALL, "ptb");

    int valores[10] = {0};
    int PeI[2] = {0,0};

    for (int i = 0; i < 10; i++)
    {
        cout << "Número " << i+1<<": ";
        cin >> valores[i];

        if(valores[i]%2==0)
        {
            PeI[0]++;
        }else
        {
            PeI[1]++;
        }        
    }
    
    cout << "Números pares: "<< PeI[0]<<endl
         << "Números impares: "<< PeI[1];    
    return 0;
}