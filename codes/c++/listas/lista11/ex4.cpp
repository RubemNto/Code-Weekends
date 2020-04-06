#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    float notas[15];
    float maior, media;
    float menor = 100;

    for (size_t i = 0; i < 15; i++)
    {
        cout << "Nota" << i+1<<":";
        cin>>notas[i];
        if (notas[i] > maior)
        {
            maior = notas[i];
        }else if (notas[i] < menor)
        {
            menor = notas[i];
        }        
    }

    media =(notas[0]+notas[1]+notas[2]+notas[3]+notas[4]+notas[5]+notas[6]+
    notas[7]+notas[8]+notas[9]+notas[10]+notas[11]+notas[12]+notas[13]+notas[14])/15.0;

    cout << menor<<endl
    <<maior<<endl
    <<media<<endl;
    return 0;
}