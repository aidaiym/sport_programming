/*
7. Overload a function that takes two numbers as input and returns their average.
The function should be overloaded to handle different combinations of integers, doubles, and complex numbers.

*/
#include <iostream>
#include <complex>
using namespace std;

double average(int num1, int num2);
double average(double num1, double num2);
double average(complex<double> num1, complex<double> num2);

int main()
{
    int x1, x2;
    cout << "Enter integer numbers \n ";
    cin >> x1 >> x2;
    cout << "Average value of integer numbers= " << average(x1, x2) << endl;
    double y1, y2;
    cout << "Enter double numbers \n ";
    cin >> y1 >> y2;
    cout << "Average value of double numbers= " << average(y1, y2) << endl;

    complex<double> z1(10.0, 2.0);
    complex<double> z2(30.0, 23.0);
    cout << "Average value of double numbers= " << average(z1, z2) << endl;
    return 0;
}

double average(int num1, int num2) { return (num1 + num2) / 2; };
double average(double num1, double num2) { return (num1 + num2)/2; };
double average(complex<double> num1, complex<double> num2)
{
    cout << (num1 + num2) / .2;
    return 0;
};
