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

  int a, b;
  cout << "Enter integer width and height \n ";
  cin >> a >> b;
  cout << "Area of rectangle = " << aRectangles(a, b) << endl;
  double c, d;
  cout << "Enter double  width and height  \n ";
  cin >> c >> d;
  cout << "Area of rectangle = " << aRectangles(c, d) << endl;

  // Area of triangles
  int e, f;
  cout << "Enter integer b and height \n ";
  cin >> e >> f;
  cout << "Area of triangles = " << aTriangles(e, f) << endl;
  double g, k;
  cout << "Enter double  b and height  \n ";
  cin >> g >> k;
  cout << "Area of triangles = " << aTriangles(g, k) << endl;
  return 0;
}

double aCircles(int r) { return M_PI * r * r; };
double aCircles(double r) { return M_PI * r * r; };
double aTriangles(int b, int h) { return (1/.2)*b*h; };
double aTriangles(double b, double h) { return (1/.2)*b*h; };
double aRectangles(int w, int height) { return w * height; };
double aRectangles(double w, double height) { return w * height; };