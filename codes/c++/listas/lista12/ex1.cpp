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
    //

    //exercicio b
    cout << "exercicio B" << endl;
    for (size_t i = 20; i < 51; i++)
    {
        if (i%2 ==0)
        {
            cout << i << ", ";
        }        
    }
    //

    //exercicio c
    cout << "exercicio C" << endl;
    for (size_t i = 70; i > 24; i--)
    {
        cout << i << ", ";
    }
    //
    
    //exercicio d
    cout << "exercicio D" << endl;
    for (size_t i = 95; i > 24; i--)
    {
        if(i%2 != 0)
        {
            cout << i << ", ";
        }
    }
    //

    //exercicio e
    cout << "exercicio E" << endl;
    int num[15];
    for (size_t i = 0; i < 15; i++)
    {
        num[i] = i;
        if (num[14] != 0)
        {
            cout << "Soma: " << num[0]+num[1]+num[2]+num[3]
            +num[4]+num[5]+num[6]+num[7]+num[8]+num[9]+num[10]
            +num[11]+num[12]+num[13]+num[14] << endl;
            cout << "Média: " << (num[0]+num[1]+num[2]+num[3]
            +num[4]+num[5]+num[6]+num[7]+num[8]+num[9]+num[10]
            +num[11]+num[12]+num[13]+num[14])/15<<endl;            
        }        
    }
    //

    //exercicio f
    cout << "exercicio F" << endl;
    int finish,numI,numP;
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
        finish++;      
    }
    if (finish == 10)
    {
        cout<<"numeros impares, "<<numI<<endl
            <<"numeros pares, "<<numP<<endl;
    }    
    //

    //exercicio g
    cout << "exercicio G" << endl;
    int numNeg,numPos,numNul,simbol;
    finish = 0;
    for (size_t i = 0; i < 21; i++)
    {
        srand(time(0));
        simbol = rand()%4;
        if (simbol == 0)
        {
            cout << i *-1<<endl;
            numNeg++;
        }else if(simbol == 1)
        {
            cout << i <<endl;
            numPos++;
        }else
        {
            cout << i <<endl;
            numNul++;
        }  
        finish ++;             
    }
    if (finish == 20)
    {
        cout<<"numeros negativos, "<<numI<<endl
            <<"numeros positivos, "<<numP<<endl
            <<"numeros nulos, "<<numNul<<endl;
    }    
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
    return 0;
}