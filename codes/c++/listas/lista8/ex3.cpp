#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    int mes;

    cout << "numero do mes: ";
    cin >> mes;

    if(mes ==1 || mes == 2 || mes == 6 || mes == 7 ||mes == 12)
    {
        cout << "seu mes = alta temporada";
    }else 
        cout << "seu mes = baixa temporada";
    return 0;
}