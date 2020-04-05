#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    int valor,valorGuardar;

    cout << "Valor: ";
    cin >> valor;

    if(valor%100 == 0)
    {
        cout
        <<"numero de notas de 100: " << valor/100<<endl
        <<"não existem outras notas";
    }else
    {
        valorGuardar = valor;
        if (valor%100%50 == 0)
        {
            cout
            <<"numero de notas de 100: " << valor/100<<endl
            <<"numero de notas de 50: " << valor%100/50<<endl
            <<"não existem outras notas";
        }else
        {
            if(valor%100%50%20 == 0)
            {
                cout
                <<"numero de notas de 100: " << valor/100<<endl
                <<"numero de notas de 50: " << valor%100/50<<endl
                <<"numero de notas de 20: " << valor%100%50/20<<endl
                <<"não existem outras notas";
            }else
            {
                if(valor%100%50%20%10 == 0)
                {
                    cout
                    <<"numero de notas de 100: " << valor/100<<endl
                    <<"numero de notas de 50: " << valor%100/50<<endl
                    <<"numero de notas de 20: " << valor%100%50/20<<endl
                    <<"numero de notas de 10: " << valor%100%50%20/10<<endl
                    <<"não existem outras notas";
                }else
                {
                    if(valor%100%50%20%10%5 == 0)
                    {
                        cout
                        <<"numero de notas de 100: " << valor/100<<endl
                        <<"numero de notas de 50: " << valor%100/50<<endl
                        <<"numero de notas de 20: " << valor%100%50/20<<endl
                        <<"numero de notas de 10: " << valor%100%50%20/10<<endl
                        <<"numero de notas de 10: " << valor%100%50%20%10/5<<endl
                        <<"não existem outras notas";
                    }else
                    {
                        if(valor%100%50%20%10%5 == 0)
                        {
                            cout
                            <<"numero de notas de 100: " << valor/100<<endl
                            <<"numero de notas de 50: " << valor%100/50<<endl
                            <<"numero de notas de 20: " << valor%100%50/20<<endl
                            <<"numero de notas de 10: " << valor%100%50%20/10<<endl
                            <<"numero de notas de 5: " << valor%100%50%20%10/5<<endl
                            <<"numero de notas de 1: " << valor%100%50%20%10%5/1<<endl
                            <<"não existem outras notas";
                        }
                    }
                    
                }
                
            }
            
        }
        
        
    }
    

    return 0;
}