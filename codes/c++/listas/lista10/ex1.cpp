#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");
    
    bool a = false;
    bool b = true;
    bool c = false;
    bool d;
    cout << boolalpha; // muda 0 e 1 para false e true

    d = a && b; //f
    cout << "a) " << d << endl;
    d = a || b; //t
    cout << "b) " << d << endl;
    d = a && b && c; //f
    cout << "c) " << d << endl;
    d = a && b || c; //f
    cout << "d) " << d << endl;
    d = a || c && b; //f
    cout << "e) " << d << endl;
    d = (a || c) && b; //f
    cout << "f) " << d << endl;
    d = !a; //t
    cout << "g) " << d << endl;
    d = a || !a; //t
    cout << "h) " << d << endl;
    d = a && !a; //f
    cout << "i) " << d << endl;
    d = a && !b && c; //f
    cout << "j) " << d << endl;
    d = !(a && b) || !c; //t
    cout << "k) " << d << endl; 

    return 0;
}
