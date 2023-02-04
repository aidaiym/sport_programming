/*
2. Даны радиус основания и высота цилиндра. Написать функцию,
вычисляющую площадь основания и объем цилиндра. Результат в главную
программу передается через список параметров по указателю или по ссылке.
*/
#include <iostream>
#include <cmath>

using namespace std;
float area, volume;

int cylinderFunc(float radius, float h)
{
    volume = M_PI * radius * radius * h;
    area = M_PI * radius * radius;
    cout << "Volume= " << volume << endl;
    cout << "Area= " << area << endl;
    return 0;
}

int main()
{
    cylinderFunc(3.2, 624.0023);
    return 0;
}