#include <iostream>
using namespace std;
main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + 1 == c +1 || b+1 == d +1)
        cout << "YES";
    else
        cout << "NO";
}

