#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    float notas[4];
    float media = 0;

    for (int i = 0; i < 4; i++)
    {
        cout<<"Nota "<<i+1<<":";
        cin>>notas[i];
        media+=notas[i];
    }

    media/=4.0;
    
    for (int i = 0; i < 4; i++)
    {
        cout<<notas[i]<<endl;
    }
        
    cout << "Média das notas: " << media;
    return 0;

}