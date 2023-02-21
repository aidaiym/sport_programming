/*
6. Overload a function that takes a single integer as input and returns its square.
The function should be overloaded to handle integers, doubles, and complex numbers.
*/
#include <iostream>
#include <complex>
using namespace std;

double square(int num);
double square(double num);
double square(complex<double> num);

int main()
{
    int x;
    cout << "Enter integer number \n ";
    cin >> x;
    cout << "Square = " << square(x) << endl;
    double y;
    cout << "Enter double number \n ";
    cin >> y;
    cout << "Square " << square(y) << endl;
    complex<double> z(10.0, 2.0);
    cout << "Square " << square(z) << endl;
    return 0;
}

double square(int num) { return num * num; };
double square(double num) { return num * num; };
double square(complex<double> num)
{
    cout << num * num;
    return 0;
};
