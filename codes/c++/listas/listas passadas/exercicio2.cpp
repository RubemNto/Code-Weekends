#include <iostream>

using namespace std;

int numeroDeUnicornios;
const int numeroDeFerraduras = 4;
int numeroDeFerradurasParaUnicornios;

int main()
{
    cout << "Numero de cavalos comprados: ";
    cin >> numeroDeUnicornios;
    numeroDeFerradurasParaUnicornios = numeroDeUnicornios * numeroDeFerraduras;
    cout << "o numero de ferraduras e " << numeroDeFerradurasParaUnicornios;
    return 0;
}