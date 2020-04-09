#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    int numElefantes;

    cout<<"Elefantes: ";
    cin >> numElefantes;

    for (size_t i = 1; i <= numElefantes; i++)
    {
        if(i%2 != 0)
        {
            if(i==1)
            {   
                cout << i << " elefante incomoda muita gente, " << endl;
            }else
            {
                cout << i << " elefantee incomodam muita gente, " << endl;
            }
            
        }else
        {
            cout << i << " elefantes ";
            for (size_t e = 1; e <= i; e++)
            {
                cout << " incomodam ";
            }
            cout << "muito mais"<<endl;
            
        }
        
    }

    return 0;
}