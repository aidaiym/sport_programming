/*
3. Overload a function that calculates the area of different shapes. 
The function should handle the calculation of areas for circles, rectangles, and triangles.
*/

#include <iostream>
using namespace std;

double aCircles(int r);
double aCircles(double r);
double aTriangles(int b, int h);
double aTriangles(double b, double h);
double aRectangles(int w, int height);
double aRectangles(double w, double height);
int main()

{
    // Area of Circle
    int x;
    cout << "Enter integer radius \n ";
    cin >> x;
    cout << "Area of circle = " << aCircles(x) << endl;
    double y;
    cout << "Enter double radius \n ";
    cin >> y;
    cout << "Area of circle = " << aCircles(y) << endl;
//  Area of Rectangles

  int a,b;
    cout << "Enter integer width and height \n ";
    cin >> a>>b;
    cout << "Area of rectangle = " << aCircles(x) << endl;
    double y;
    cout << "Enter double radius \n ";
    cin >> y;
    cout << "Area of circle = " << aCircles(y) << endl;
    return 0;
}

double sum(int a, int b) { return a + b; }
double sum(double a, double b) { return a + b; }
double product(int a, int b) { return a * b; }
double product(double a, double b) { return a * b; }
double difference(int a, int b) { return a - b; }
double difference(double a, double b) { return a - b; }