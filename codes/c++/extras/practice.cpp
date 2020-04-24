#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string>

using namespace std;


float num1,num2,num3,num4;


void doStuff(float number1,float number2,float number3);

int main()
{
    cin>>num1;
    cin>>num2;
    cin>>num3;

    doStuff(num1,num2,num3);

    return 0;

}

void doStuff(float number1,float number2,float number3)
{
    if (number1 == number2 && number1 == number3)
    {
        num4 = number1+number2+number3;
        cout << num4<<endl;
    }else
    {
        num4 = number1*number2*number3;
        cout << num4<<endl;
    }
}