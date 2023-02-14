/*
Пример перегрузки функций, вычисляющих среднее
арифметическое значение для двух целых чисел, для трех целых
чисел, для двух действительных и трех действительных чисел
*/ 
#include <iostream>
using namespace std;

double avg(int a, int b);
double avg(int a, int b, int c);
double avg(double a, double b);
double avg(double a, double b, double c);

int main()

{
    int x, y, z;
    cout << " Enter 3 integers \n ";
    cin >> x >> y >> z;
    cout << " average value of 2 numbers = " << avg(x, y);
    cout << " average value of 3 numbers = " << avg(x, y, z);
    double n, m, k;
    cout << " Enter 3 real numbers \n ";
    cin >> n >> m >> k;
    cout << " average value of 2 real numbers = " << avg(n, m);
    cout << " average value of 3 real numbers = " << avg(n, m, k);
    system("pause");
    return 0;
}

double avg(int a, int b) { return (a + b) / 2.0; }
double avg(int a, int b, int c) { return (a + b + c) / 3.0; }
double avg(double a, double b) { return (a + b) / 2; }
double avg(double a, double b, double c){return (a + b + c) / 3;}