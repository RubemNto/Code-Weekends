#include <iostream>


using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    int fatorial, valorF;
    int repeat = 1;

    while(repeat == 1)
    {
        cout << "Número fatorial a calcular: ";
        cin >> fatorial;
        valorF = fatorial;

        for (size_t i = fatorial; i >= 1 ; i--)
        {
            if(i-1 != 0)
            {
                valorF*= (i-1);
            }
        }
        cout << valorF<<endl;

        cout << "Que fazer de outro número, sim(1) ou não(0)? ";
        cin >> repeat;
    }
    return 0;
}