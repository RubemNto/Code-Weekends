#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float multa;
    float taxa = 5/100;
    int i;

    cout<<"multa: ";
    cin >> multa;

    cout << "quantos meses para pagar: ";
    cin >> i;

    multa = multa*pow(1.05, i);

    cout << "Sua multa = " << multa<<endl;
       
    return 0;
}