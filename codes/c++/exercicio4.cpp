#include <iostream>
#include <ctime>
#include <string>

using namespace std;

const float valorGas = 5.0f;
float dinheiroDoMotorista;
float gasolinaF;

void calcularGasolina(float dinheiroDoMotorista)
{
	gasolinaF = dinheiroDoMotorista/valorGas;		
}

int main()
{
	cout << "Hoje a gasolina possui o velor de " << valorGas << " por litro" << endl;
	cout << "Bom dia, boa tarde , boa noite. Quantos reais de gasolina precisamos hoje?" << endl
		 << "valor a pagar: " << flush;
	cin >> dinheiroDoMotorista;
	calcularGasolina(dinheiroDoMotorista);
	cout << "voce possui " << gasolinaF << "litros" << endl; 
	system("Pause");
	return 0;
}


