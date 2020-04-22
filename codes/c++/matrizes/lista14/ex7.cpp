#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    srand(time(0));
    int matriz[4][4] = {0};
    for (int l = 0; l < 4; l++)
    {
        for (int c = 0; c < 4; c++)
        {
            if(l != c && c > l)
            {
                matriz[l][c] = 1;
            }else if(l!=c && l > c)
            {
                matriz[l][c] = 2;
            }
            else
            {
                matriz[l][c] == 0;
            }            
        }        
    }
    for (int l = 0; l < 4; l++)
    {
        for (int c = 0; c < 4; c++)
        {
            cout<<matriz[l][c]<<"\t";           
        }        
        cout<<endl;
    }    
    return 0;
}