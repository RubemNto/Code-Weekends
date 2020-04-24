#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    string palavra;
    char vogal;


    cout << "palavra: ";
    cin >> palavra;

    while(isdigit(vogal) && (vogal != 65 || vogal != 69 || vogal != 73 || vogal != 79 || vogal !=85))
    {
        cout << "vogal: ";
        cin >> vogal;
    }
    return 0;
}