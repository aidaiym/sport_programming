#include <iostream>

using namespace std;

int main()
{
    int x, a, b, c;
    cin >> x;
    if (x % 5 == 0)
    {
        a = x / 5;
        b = 0;
    }
    else
    {
        a = x / 5;
        b = x % 5 / 3;
    }
    cout << a << " " << b << endl;
    return 0;
}