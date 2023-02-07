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

void triangleHA(double cathet_1, double cathet_2, double *t_hypotenuse, double *t_area);

int main()
{
    double a, b, hypotenuse, area;
    cout << "Enter two cathets: " << endl;
    cin >> a >> b;
    triangleHA(a, b, &hypotenuse, &area);
    cout << "Hypotenuse= " << hypotenuse << endl;
    cout << "Area= " << area << endl;
    return 0;
}
void triangleHA(double cathet_1, double cathet_2, double *t_hypotenuse, double *t_area)
{
    *t_hypotenuse = sqrt((cathet_1 * cathet_1) + (cathet_2 * cathet_2));
    *t_area = sqrt((cathet_1 * cathet_1) / 2);
}
