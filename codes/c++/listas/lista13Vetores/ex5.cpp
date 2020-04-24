#include <iostream>
#include <string>

using namespace std;
int main()
{
    setlocale(LC_ALL, "ptb");

    int num[5];
    int multiplicador;

    for (int i = 0; i < 5; i++)
    {
        multiplicador = i;
        cout << "numero: ";
        cin >> num[i];

        num[i]*=multiplicador;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << " ";
    }
    
       
    return 0;
}