/*
Однажды, посетив магазин канцелярских товаров, Вася купил X карандашей, Y ручек и Z фломастеров.
Известно, что цена ручки на 2 рубля больше цены карандаша и на 7 рублей меньше цены фломастера.
Также известно, что стоимость карандаша составляет 3 рубля.
Требуется определить общую стоимость покупки.
*/
#include <iostream>
using namespace std;
int main()
{
    long long n_x, n_y, n_z, p_x, p_y, p_z, total;
    cin >> n_x >> n_y >> n_z;
    p_x = 3 * n_x;
    p_y = 5 * n_y;
    p_z = 12 * n_z;
    total = p_x + p_y + p_z;
    cout << total;
    return 0;
}
