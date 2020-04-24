#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    srand(time(0));
    int i;
    i = rand()%21;

    if (i >= 10 && i <=15)
    {
        cout << "very good\n"<<i<<endl;
    }else 
    {
        cout << "Not good\n"<<i<<endl;
    }
    
    return 0;
}