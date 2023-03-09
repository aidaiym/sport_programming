#include <iostream>
using namespace std;

bool p(int a, int b, int k, int w)
{
    return (b >= k) && (a <= w);
}
int main()
{
    int a1, b1, a2, b2, a3, b3, k, w;
    cin >> k >> w >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

    if (p(a1, b1, k, w) || p(a2, b2, k, w) || p(a3, b3, k, w) || p(a1 + a2, b1 + b2, k, w) || p(a1 + a3, b1 + b3, k, w) || p(a3 + a2, b3 + b2, k, w) || p(a1 + a2 + a3, b1 + b2 + b3, k, w))
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}