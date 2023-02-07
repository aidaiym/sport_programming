#include <iostream>

using namespace std;

void SumAve(double, double, double &, double &);
int main()
{
    double x, y, sum, mean;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    SumAve(x, y, sum, mean);
    cout << "The sum is " << sum << endl;
    cout << "The average is " << mean << endl;
    return 0;
}

void SumAve(double no1, double no2, double &sum, double &average)
{

    sum = no1 + no2;
    average = sum / 2;
}