
/*
Одна из основных операций с числами – их сравнение.
Мы подозреваем, что вы в совершенстве владеете этой операцией и можете сравнивать любые числа, в том числе и целые.
В данной задаче необходимо сравнить два целых числа.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << ">" << endl;
    }
    else if (a < b)
    {
        cout << "<" << endl;
    }
    else
    {
        cout << "=" << endl;
    }
    return 0;
}