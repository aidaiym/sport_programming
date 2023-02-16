#include <iostream>
using namespace std;
main()
{
    int a, b, c, d, e, f, g, h, x, y;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    x = a + c + e + g;
    y = b + d + f + h;
    if (x == y)
        cout << "DRAW";
    else if (x < y)
        cout << "2";
    else
        cout << "1";
}