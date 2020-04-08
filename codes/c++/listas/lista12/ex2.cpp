#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"ptb");
    int num1,num2;
    
    cout<<"Entre com o número inicial da contagem: ";
    cin >> num1;

    cout<<"Entre com o número final da contagem: ";
    cin >> num2;

    for (size_t i = num1; i <= num2; i++)
    {
        cout<<i<<endl;
    }    

    return 0;
}