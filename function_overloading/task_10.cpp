/*
10. Overload a function that takes two points in 2D space as input and returns the distance between them.
The function should be overloaded to handle different combinations of points, lines, and curves.

*/

#include <iostream>
using namespace std;

double distance(int x1, int y1, int x2, int y2);
double distance(int c1, int c2, int m);
double distance(int a, int b, double x);

int main()
{
    int p1, p2, p3, p4;
    cout << "Enter points value \n ";
    cin >> p1 >> p2 >> p3 >> p4;
    cout << "Distance between them = " << distance(p1, p2, p3, p4) << endl;
    int l1, l2, l3;
    cout << "Enter lines values \n ";
    cin >> l1 >> l2 >> l3;
    cout << "Distance between them = " << distance(l1, l2, l3) << endl;
    int cu1, cu2;
    double cu3;
    cout << "Enter curves values \n ";
    cin >> cu1 >> cu2 >> cu3;
    cout << "Distance between them = " << distance(cu1, cu2, cu3) << endl;
    return 0;
}
double distance(int a, int b, double x) { return (b * x / a); };
double distance(int x1, int y1, int x2, int y2) { return sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))); };
double distance(int c1, int c2, int m) { return (abs(c2 - c1) / (sqrt(1 + m * m))); };