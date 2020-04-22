#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    int matriz[7][6];

    int inicial = 1;

    for (int l = 0; l < 6; l++)
    {
        for (int c = 0; c < 7; c++)
        {
            if(c<3)
            {
                matriz[c][l] = inicial++;
            }else
            {
                matriz[c][l] = inicial--;
            }           
        }
        if(l < 2)
        {
            inicial+=2;
        }
        if(l == 2)
        {
            inicial++;
        }
    }
        
    
    for (int l = 0; l < 6; l++)
    {
        for (int c = 0; c < 7; c++)
        {
            cout<< matriz[c][l]<<"\t";
            
        }
        cout<<endl;
    }
    
    
    
    return 0;
}