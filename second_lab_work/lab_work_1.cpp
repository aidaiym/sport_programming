/*
1. Даны два катета прямоугольного треугольника. Написать функцию,
определяющую гипотенузу и площадь треугольника. Функция не должна
возвращать значение. Результат передается в главную программу main через
список параметров. Функция должна иметь 4 параметра: 1-й катет, 2-й катет,
гипотенузу, площадь. Реализовать передачу двух последних параметров по
ссылке и по указателю.
*/

#include <iostream>
#include <cmath>

using namespace std;

void triangleHA(int cathet_1, int cathet_2, double *hypotenuse, double *area);

int main()
{
    double cathet_1, cathet_2, z, R;
    cin >> cathet_1 >> cathet_2;
    triangleHA(cathet_1, cathet_2, &z, &R);
    cout << "Hypotenuse= " << z << endl;
    cout << "Area= " << R << endl;
    return 0;
}
void triangleHA(int cathet_1, int cathet_2, double *hypotenuse, double *area)
{
    *hypotenuse = sqrt((cathet_1 * cathet_1) + (cathet_2 * cathet_2));;
    *area = sqrt((cathet_1 * cathet_1)/2);
}
