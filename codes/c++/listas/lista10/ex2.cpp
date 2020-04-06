#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    int x = 5;
    int y = 10;
    bool a = (x == y);  //f
    bool b = (x != y);  //t
    bool c = (x < 5);   //f
    bool d = (x <= 5);  //t
    bool e = (x <= y);  //t
    bool f = (y >= x+1);    //t
    bool g;
    cout << boolalpha;

    g = a && b;                     //f
    cout << g << endl;
    g = b && c || d;                //t
    cout << g << endl;
    g = d || e && f;                //t
    cout << g << endl;
    g = (d || e) && f;              //t
    cout << g << endl;
    g = !e || e && f || !f;         //t
    cout << g << endl;
    g = (!e || e) && (f || !f);     //t
    cout << g << endl;
    g = !(e && !e) && !(a || !a);   //f
    cout << g << endl;
    g = !(!a) && a;                 //f
    cout << g << endl;
    g = !(!(!b) || b);              //f
    cout << g << endl;
    g = !(c || !d) && f || e;       //t
    cout << g << endl;
    return 0;
}