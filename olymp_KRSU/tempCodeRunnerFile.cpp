#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n%2==1)
        cout << "7";
        n-=3;
    

    for (int i = 0; i < n/2; n++)
    {
        cout << "1";
    }
    return 0;
}