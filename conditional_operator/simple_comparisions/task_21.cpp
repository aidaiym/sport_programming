/*
В отделе работают 3 сотрудника, которые получают заработную плату в рублях. 
Требуется определить: на сколько зарплата самого высокооплачиваемого из них отличается от самого низкооплачиваемого.
*/
#include <iostream>
using namespace std;

int main()
{
    int x, y, z, max, min;
    cin >> x>>y>>z;
    min = x < y ? (x < z ? x : z) : (y < z ? y : z);
    max = x>y ? (x>z ? x: z) : (y>z?y:z);
    cout << max-min << endl;
    return 0;
}
