/*
9. Overload a function that takes two 3D vectors as input and returns their dot product.
The function should be overloaded to handle different combinations of vectors and matrices.
*/

#include <iostream>
#include <ctime>
using namespace std;

int dotProduct(int x1, int y1, int z1, int x2, int y2, int z2);
int dotProduct(int x1, int x2, int x3, int y1, int y2, int y3, int z1, int z2, int z3);

int main()
{
    int v1, v2,v3,v4,v5,v6;
    cout << "Enter vector values \n ";
    cin >> v1>>v2>>v3>>v4>>v5>>v6;
    cout << "Dot Product of vector = " << dotProduct(v1, v2,v3,v4,v5,v6) << endl;
    int m1, m2,m3,m4,m5,m6,m7,m8,m9;
    cout << "Enter matrix values \n ";
    cin >> m1>> m2>>m3>>m4>>m5>>m6>>m7>>m8>>m9;
    cout << "Dot Product of matrix = " << dotProduct(m1, m2,m3,m4,m5,m6,m7,m8,m9) << endl;
    return 0;
}

int dotProduct(int x1, int y1, int z1, int x2, int y2, int z2){return (x1 * x2) + (y1 * y2) + (z1 * z2);};
int dotProduct(int x1, int x2, int x3, int y1, int y2, int y3, int z1, int z2, int z3)
{
    return (x1 * x2*x3) + (y1 * y2*y3) + (z1 * z2);
};

