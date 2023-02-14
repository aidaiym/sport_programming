/*
Улитка ползет по вертикальному шесту высотой H метров, поднимаясь за день на A метров, а за ночь спускаясь на B метров. На какой день улитка доползет до вершины шеста?
*/

#include <iostream>
using namespace std;
int main()
{
    int h, a, b, result, day=0;
    cin >> h >> a >> b;
    while (day == h)
    {
        day =  a - b;
        day++;
    }
    cout << day << endl;
    return 0;
}
