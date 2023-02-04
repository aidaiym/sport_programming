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
float hypotenuse, area, hypotenuse_val, area_val;

int hypotenuseFunc(int cathet_1, int cathet_2)
{
    hypotenuse = sqrt((cathet_1 * cathet_1) + (cathet_2 * cathet_2));
    return hypotenuse;
}

int areaFunc(float cathet_1, float cathet_2)
{
    area = sqrt((cathet_1 * cathet_1)/2);
    return area;
}

int main()
{
    cout << "Hypotenuse= "<<  hypotenuseFunc(6, 29) << endl;
    cout << "Area= "<<  areaFunc(134, 298) << endl;
    return 0;
}