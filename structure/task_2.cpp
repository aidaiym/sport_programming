/*
2. Create a struct named "Rectangle" that contains fields for length and width.
    Write a function that takes a Rectangle object as input and returns its area.
    Then, create an array of 5 Rectangle objects and populate it with data.
    Loop through the array and print out the area of each rectangle.
*/

#include <iostream>

using namespace std;

struct Rectangle
{
    double length;
    double width;
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }
};

double area(Rectangle rect)
{
    return rect.length * rect.width;
}

int main()
{
    Rectangle rectangles[5] = {
        Rectangle(3.5, 2.0),
        Rectangle(0.5, 34.3),
        Rectangle(34.5, 42.3),
        Rectangle(30.5, 24.9),
        Rectangle(45.5, 2.7)
    }; 
    for (int i = 0; i < 5; i++)
    {
        cout << "Rectangle " << i + 1 << " area: " << area(rectangles[i]) << endl;
    }
    return 0;
}
