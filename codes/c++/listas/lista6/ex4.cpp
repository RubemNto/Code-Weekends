#include <iostream>
#include <ctime>
#include <stdio.h>

using namespace std;

int main()
{
    float V1, V2, vt;

    cout << "valor 1: ";
    cin >> V1;
    
    cout << "valor 2: ";
    cin >> V2;

    vt = V1;

    V1 = V2;
    V2 = vt;

    cout << V1 << endl;
    cout << V2<< endl;

    return 0;
}