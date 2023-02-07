#include <iostream>

using namespace std;

void SP(int a, int b, int *S, int *P);

int main()
{
    int x, y, z, R;
    cin >> x >> y;
    SP(x, y, &z, &R);
    cout << "s u m =" << z << endl;
    cout << "p r o d u c t =" << R << endl;
    return 0;
}

void SP(int a, int b, int *S, int *P)
{
    *S = a + b;
    *P = a * b;
}