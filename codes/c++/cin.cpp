#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Today we will go out on a adventure to the land of Codeburg. But before we start our journy, I must know your name." << endl;
    cout << "Name: " << flush;
    string name;
    cin >> name;
    cout << "nice to meet you " << name << endl;
    cout << "for us to get from point A to point B we must find transportation, ufortunately cars aren't are reality yet so we must use something else. What do you choose, a hourse or a pony?" << endl; 
    return 0;
}