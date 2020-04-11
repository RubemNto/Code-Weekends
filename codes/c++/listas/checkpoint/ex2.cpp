#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    bool repeat = true;//repetir o programa
    int carteira = 0;
    int piorCarteira = 0;
    int numCarteiras = 0;
    int numMultas = 0 , numtotalMultas = 0, maiorNumDeMultas = 0;
    float valorMulta=0;
    float valortotoalMultas=0;

    while (repeat == true)
    {    
        while (repeat == true && (carteira < 1 || carteira > 1000000))
        {
            cout << "Número da carteira de 1 até 1.000.000(Cartira número 0 fecha o programa): ";
            cin >> carteira;

            if (carteira == 0)
            {
                repeat = false;
            }
        }
        
        if(repeat){
        while (numMultas < 1)
        {
            cout << "Número de multas acumuladas: ";
            cin >> numMultas;

            for (size_t i = 1; i <= numMultas; i++)
            {
                numtotalMultas++; //pergunta C
            }
        }
        
        if (numMultas > maiorNumDeMultas)
        {
            maiorNumDeMultas = numMultas;
            piorCarteira = carteira;
        }
        

        for (int i = 1; i <= numMultas; i++)
        {            
            cout << "Multa " << i<<endl<<"Valor: ";
            cin >> valorMulta;
            valortotoalMultas+=valorMulta; //pergunta B
        }
        }


        carteira = 0;
        numMultas = 0;
    }

    cout << fixed;
    cout<<"Número total de multas: "<<numtotalMultas<<endl<<endl
        <<"Valor acumulado com as multas: "<<setprecision(0)<<valortotoalMultas<<endl<<endl
        <<"Média do valor de cada multa: "<< setprecision(2)<<valortotoalMultas/(numtotalMultas*1.0)<<endl<<endl;
    
    cout<<"A pior carteira foi a número " << piorCarteira << " com um total de " << maiorNumDeMultas<<" multas"<<endl;
    
    
    return 0;
}
