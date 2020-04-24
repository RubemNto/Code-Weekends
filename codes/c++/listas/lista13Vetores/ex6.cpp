#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    int num[10] = {0};

    for (int i = 0; i < 10; i++)
    {
        cout << "numero: ";
        cin >> num[i];
    }

    for (int i = 10; i >= 0; i--)
    {
        cout << num[i] << " ";
    }   

    return 0;
}