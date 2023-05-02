#include <iostream>
using namespace std;
int main()
{
    int l, r, a, b;
    cin >> l >> r;
    a = sqrt(l);
    b = sqrt(r);

    if ( (l - a * a == 0 || l - a * a == 1)&& (r - b * b == 0 || r - b * b == 1))
    {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}