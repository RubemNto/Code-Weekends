#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    srand(time(0));
    int matriz[3][5];
    int multiplicador;

    cout<<"multiplicador da matriz: ";
    cin >> multiplicador;

    for(int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            matriz[l][c] = rand()%5+1;
        }        
    }

    for(int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            cout<<matriz[l][c]<<"\t";
        }     
        cout<<endl;   
    }
    cout<<endl;

    for(int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            cout<<matriz[l][c]*multiplicador<<"\t";
        }     
        cout<<endl;   
    }
    
    return 0;
}