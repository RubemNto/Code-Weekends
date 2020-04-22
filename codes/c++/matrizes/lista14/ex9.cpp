#include <iostream>
using namespace std;
int main()
{
int t, i, matriz[3][4];
for (t=0; t<3; ++t){
for (i=0; i<4; ++i){
matriz[t][i] = (t*4)+i+1;
}
}
for (t=0; t<3; ++t)
{
    for (i=0; i<4; ++i)
    {
    cout << matriz[t][i] << " ";
    cout << endl;
    }
}
return 0;
}