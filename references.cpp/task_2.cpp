/*
2. Даны радиус основания и высота цилиндра. Написать функцию,
вычисляющую площадь основания и объем цилиндра. Результат в главную
программу передается через список параметров по указателю или по ссылке.
*/
#include <iostream>
#include <cmath>

using namespace std;

void  cylinderFunc(double, double, double &, double &);

int main()
{
      double c_r, c_h, c_volume, c_area;
    cout << "Enter radius of cylinder: "<<endl;
    cin >> c_r ;
     cout << "Enter height of cylinder: "<<endl;
    cin >> c_h;
    cylinderFunc(c_r, c_h, c_volume, c_area);
    cout << "Volume= " << c_volume << endl;
    cout << "Area= " << c_area << endl;
    return 0;
}

void cylinderFunc(double radius, double h, double& volume, double& area)
{
    volume = M_PI * radius * radius * h;
    area = M_PI * radius * radius;
}
