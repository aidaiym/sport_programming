// Pass-by-reference versus pass-by-value example

#include <iostream>

using namespace std;

void One(int a, int b, int &c)
{

    int d;

    a = 10;
    b = 11;
    c = 12;
    d = 13;

    cout << "The values of a, b, c, and d in One:\n";

    cout << a << " " << b << " " << c << " "<< d << endl;
}

void Two(int a, int b, int &d)
{

    int c = 0;

    cout << "The values of a, b, c, and d in Two:\n";

    cout << a << " " << b << " " << c << " " << d << endl;
}
int main()
{

    int a = 1, b = 2, c = 3, d = 4;

    cout << "The original values of a,b,c,and d:\n";

    cout << a << " " << b << " " << c << " "<< d << endl<< endl;

    One(a, b, c);

    cout << "The values of a,b,c,and d after One:\n";

    cout << a << " " << b << " " << c << " " << d << endl;

    Two(a, b, d);

    cout << "The values of a,b,c,and d after Two:\n";

    cout << a << " " << b << " " << c << " " << d << endl;

    return 0;
}