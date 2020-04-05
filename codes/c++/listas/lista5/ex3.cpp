#include <iostream>

using namespace std;

int main()
{
    int garrafas330;
    int garrafas750;
    int garrafas1300;
    float litros;

    cout << "Numero de garrafas 330ml: ";
    cin >> garrafas330;
    cout << "Numero de garrafas 750ml: ";
    cin >> garrafas750;
    cout << "Numero de garrafas 1300ml: ";
    cin >> garrafas1300;

    litros = garrafas330 * 0.33 + garrafas750 *0.75 + garrafas1300 *1.3;

    cout << "Litros total: " << litros;
}