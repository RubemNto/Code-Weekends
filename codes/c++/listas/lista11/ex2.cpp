#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    string names[5];

    for (size_t i = 0; i < 5; i++)
    {
        cout << "Name " << i+1<<":";
        cin>> names[i];
    }
    
    return 0;
}