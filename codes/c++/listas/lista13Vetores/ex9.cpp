#include <iostream>
#include <string>

using namespace std;
int main()
{
    setlocale(LC_ALL, "ptb");
    srand(time(0));

    int num[100] = {0};
    int index = 0, i;


    while (num[99] == 0)
    {
        if(index%7 != 0 && index%10 != 7)
        {
            num[i] = index;
        }
        cout<<num[i]<<endl;
        index++;
        i++;        
    }
    
       
    return 0;
}