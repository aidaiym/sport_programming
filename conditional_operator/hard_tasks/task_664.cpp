#include <iostream>
using namespace std;

/*
На сковородке одновременно можно положить k котлет. Каждую котлету нужно с каждой стороны обжаривать m минут непрерывно.
За какое наименьшее время удастся поджарить с обеих сторон n котлет?
*/

//  n = количество котлетов
//  2*m = минута
// k = сколько можно положить
int main()
{
    int k, m, n, res;
    cin >> k >> m >> n;
    if (k >= n)
    {
        res = n * (2 * m);
        cout << res;
    }
    else
        cout << "NO";
    return 0;
}