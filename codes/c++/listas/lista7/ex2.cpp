#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    int i, f, b;
    setlocale(LC_ALL, "ptb");
    cout<<"número 1: ";
    cin>>i;

    cout<<"número 2: ";
    cin>>f;

    if (i == f)
    {
        b = i+f;
    }else
    {
        b=i*f;
    }
    cout<<b;
    
    
    return 0;
}