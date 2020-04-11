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
        
        int soma = 0;
        //float media = 0;
        for (size_t i = 1; i <= 15; i++)
        {
            soma += i;
            //media += i;       
        }
        //media/=15.0;
        cout << "Soma: "<< soma<<endl;
        cout <<"Média: "<< soma/15.0<<endl;
        cout<<endl;
    

    //exercicio f
        cout << "exercicio F" << endl;
        int numI = 0,numP = 0;
        for (size_t i = 1; i <= 10; i++)
        {
            cout << i;
            if (i%2 == 0)
            {
                cout << " é par"<<endl;
                numP++;
            }else
            {
                cout << " é impar"<<endl;
                numI++;
            }
                
        }
        cout<<endl<<"numeros impares, "<<numI<<endl
            <<"numeros pares, "<<numP<<endl;
        cout<<endl;
    

    //exercicio g
        cout << "exercicio G" << endl;
        int numNeg = 0;
        int numPos = 0;
        int numNul = 0;
        int simbol;
        
        
        srand(time(0));

        for (size_t i = 1; i <= 20; i++)
        {            
            simbol = rand()%3;           

            if (simbol == 0)
            {
                cout <<"Negativo -"<< i <<endl;
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
        cout<<"numeros negativos: "<<numNeg<<endl
            <<"numeros positivos: "<<numPos<<endl
            <<"numeros nulos: "<<numNul<<endl;

        cout<<endl;    
        //

    //exercicio h
        cout << "exercicio H" << endl;
        int numerosSomar = 0,n2;
        int numR = 0;    
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