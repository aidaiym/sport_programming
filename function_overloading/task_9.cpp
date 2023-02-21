/*
9. Overload a function that takes two 3D vectors as input and returns their dot product. 
The function should be overloaded to handle different combinations of vectors and matrices.
*/ 

#include <iostream>
#include <ctime>
using namespace std;

int dotProduct(int x1, int y1, int z1, int x2, int y2, int z2 );


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

int dotProduct(int x1, int y1, int z1, int x2, int y2, int z2 );{return (x1*x2)+(y1*y2)+(z1*z2);};
