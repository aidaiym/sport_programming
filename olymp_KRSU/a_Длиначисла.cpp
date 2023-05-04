#include <iostream>

using namespace std;

int main()
{
    int a, b, count=0;
    cin >> a >> b;
    while (a > 0)
    {
        a = a%b;
        count++;
    }

    cout << count << endl;
    return 0;
}
