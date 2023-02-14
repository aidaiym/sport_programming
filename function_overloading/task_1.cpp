/*
1. Create a program to overload a function that takes two integers as input and returns their sum, product, and difference.
The function should be overloaded to handle different combinations of integers and doubles.
*/

#include <iostream>
using namespace std;

double sum(int a, int b);
double sum(double a, double b);
double product(int a, int b);
double product(double a, double b);
double difference(int a, int b);
double difference(double a, double b);
int main()

{
    int x, y;
    cout << "Enter 2 integers \n ";
    cin >> x >> y;
    cout << "Sum of 2 numbers = " << sum(x, y) << endl;
    cout << "Product of 2 numbers = " << product(x, y) << endl;
    cout << "Difference of 2 numbers = " << difference(x, y) << endl;
    double n, m;
    cout << "Enter 2 real numbers \n " << endl;
    cin >> n >> m;
    cout << "Sum of 2 numbers = " << sum(n, m) << endl;
    cout << "Product of 2 numbers = " << product(n, m) << endl;
    cout << "Difference of 2 numbers = " << difference(n, m) << endl;
    system("pause");
    return 0;
}

double sum(int a, int b) { return a + b; }
double sum(double a, double b) { return a + b; }
double product(int a, int b) { return a * b; }
double product(double a, double b) { return a * b; }
double difference(int a, int b) { return a - b; }
double difference(double a, double b) { return a - b; }
