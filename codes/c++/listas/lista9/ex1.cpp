#include <iostream>
#include <ctime>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    int i;
    srand(time(0));
    i = rand()%100 + 1;

    if(i%2 == 0)
    {
        cout<< i << " é par" << endl;
    }else
    {
        cout << i << " é impar" << endl;
    }
  
    return 0;
}