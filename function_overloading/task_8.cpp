/*
Overload a function that takes two dates as input and returns the number of days between them. 
The function should be overloaded to handle different combinations of date formats such as mm/dd/yyyy, dd/mm/yyyy, and yyyy/mm/dd.
*/ 

#include <iostream>
#include <ctime>
using namespace std;

int dateCom(tm_mday day, tm_mon month, tm_year year );
int dateCom(tm_mon month, tm_mday day,  tm_year year);
int dateCom(tm_year year,  tm_mon month tm_mday day);

int main()
{
    tm_mday day_v = 
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

int dateCom(tm_mday day, tm_mon month, tm_year year );
int dateCom(tm_mon month, tm_mday day,  tm_year year);
int dateCom(tm_year year,  tm_mon month tm_mday day);