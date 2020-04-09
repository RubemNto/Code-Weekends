#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // exercicio a
        cout << "exercicio A" << endl;
        for (size_t i = 0; i < 101; i++)
        {
            cout << i << ", ";
        }
        cout<<endl;
    

    //exercicio b
        cout << "exercicio B" << endl;
        for (size_t i = 20; i < 51; i++)
        {
            if (i%2 ==0)
            {
                cout << i << ", ";
            }        
        }
        cout<<endl;
        //

    //exercicio c
        cout << "exercicio C" << endl;
        for (size_t i = 70; i > 24; i--)
        {
            cout << i << ", ";
        }
        cout<<endl;
    
    
    //exercicio d
        cout << "exercicio D" << endl;
        for (size_t i = 95; i > 24; i--)
        {
            if(i%2 != 0)
            {
                cout << i << ", ";
            }
        }
        cout<<endl;
    

    //exercicio e
        cout << "exercicio E" << endl;
        int num[15];
        int soma;
        float media;
        for (size_t i = 0; i < 15; i++)
        {
            soma += i;
            media += i;       
        }
        media/=15.0;
        cout << "Soma: "<< soma<<endl;
        cout <<"Média: "<< media<<endl;
        cout<<endl;
    

    //exercicio f
        cout << "exercicio F" << endl;
        int numI,numP;
        for (size_t i = 0; i < 11; i++)
        {
            cout << i;
            if (i%2 == 0)
            {
                cout << "esse número é par"<<endl;
                numP++;
            }else
            {
                cout << "esse número é impar"<<endl;
                numI++;
            }
                
        }
        cout<<"numeros impares, "<<numI<<endl
            <<"numeros pares, "<<numP<<endl;
        cout<<endl;
    

    //exercicio g
        cout << "exercicio G" << endl;
        int numNeg = 0;
        int numPos = 0;
        int numNul = 0;
        int simbol;
        
        for (size_t i = 0; i < 21; i++)
        {
            srand(time(0));
            simbol = rand()%4;
            if (simbol == 0)
            {
                cout <<"Negativo -"<< i *-1<<endl;
                numNeg++;
            }else if(simbol == 1)
            {
                cout <<"Positivo +"<< i <<endl;
                numPos++;
            }else
            {
                cout <<"Nulo "<< 0 <<endl;
                numNul++;
            }             
        }
        cout<<"numeros negativos: "<<numI<<endl
            <<"numeros positivos: "<<numP<<endl
            <<"numeros nulos: "<<numNul<<endl;

        cout<<endl;    
        //

    //exercicio h
        cout << "exercicio H" << endl;
        int numerosSomar,n2;
        int numR;    
        cout<<"exercicio h"<<endl
            <<"numeros a serem lidos de 1 até ele: ";
        cin >> numerosSomar;
        for (size_t i = 0; i <=numerosSomar; i++)
        {
            numR += i;
            n2++;
        }

        if (n2 >= numerosSomar)
        {
            cout << numR<< endl;
        }
        cout<<endl;
        return 0;
}