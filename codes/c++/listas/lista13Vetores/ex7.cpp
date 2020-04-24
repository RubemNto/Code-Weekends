#include <iostream>
#include <string>

using namespace std;
int main()
{
    setlocale(LC_ALL, "ptb");

    srand(time(0));

    int numeroJogadas = 100;
    int faces[6] ={0};
    int lance = 0;

    for (int i = 0; i < numeroJogadas; i++)
    {
        lance = rand()%6;

        if(lance == 0)
        {
            faces[0]++;
        }else if(lance == 1)
        {
            faces[1]++;
        }else if (lance == 2)
        {
            faces[2]++;
        }else if (lance == 3)
        {
            faces[3]++;
        }else if (lance == 4)
        {
            faces[4]++;
        }else
        {
            faces[5]++;
        }

    }

    cout<< "percentuais em ordem crescente: "<<endl
        << " (1) "<<faces[0]<<"% "
        << " (2) "<<faces[1]<<"% "
        << " (3) "<<faces[2]<<"% "
        << " (4) "<<faces[3]<<"% "
        << " (5) "<<faces[4]<<"% "
        << " (6) "<<faces[5]<<"% "<<endl;
    return 0;
}