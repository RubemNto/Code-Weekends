#include <iostream>
#include <ctime>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    int i;
    srand(time(0));
    i = rand()%6 + 1;

    cout<<"Número do dado sorteado é: " << i;
  
    return 0;
}