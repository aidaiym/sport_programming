#include <iostream>
using namespace std;
main()
{
    int n, i, m, mx, mn;
    cin >> n >> mx;
    mn = mx;
    for (i = 2; i <= n; i++)
    {
        cin >> m;
        if (m > mx)
            mx = m;
        if (m < mn)
            mn = m;
    }
    cout << mn << ' ' << mx;
}