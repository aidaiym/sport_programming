/*
4. Overload a function that takes two arrays as input and returns the sum of their elements.
The function should be overloaded to handle arrays of different data types such as integers, doubles, and characters.
*/

#include <iostream>
using namespace std;

int arr(int f_array[3], int s_array[3]);
double arr(double f_array[3], double s_array[3]);
char arr(char f_array[3], char s_array[3]);

int main()
{
    int a[3] = {3, 4, 5};
    int b[3] = {6, 43, 5};
    double c[3] = {45.54, 2.1, 5.3};
    double d[3] = {4.543, 23.2, 5.2};
    char e[3] = {'C','+','!'};
    char f[3] = {'D','?','='};
    cout << "Integer Array sum " << arr(a, b) << "\n";
    cout << "Double Array sum " << arr(c, d) << "\n";
    cout << "Char Array sum " << arr(e, f) << "\n";


    return 0;
}

int arr(int f_array[], int s_array[])
{
    for (int i = 0; i < 3; i++)
    {
        f_array[i] += s_array[i]; // aggregate the sums into the first array
        cout << f_array[i] << " ";
    }
    return 0;
};
double arr(double f_array[], double s_array[])
{
    for (int i = 0; i < 3; i++)
    {
        f_array[i] += s_array[i]; // aggregate the sums into the first array
        cout << f_array[i] << " ";
    }
    return 0;
};
char arr(char f_array[], char s_array[])
{
    for (int i = 0; i < 3; i++)
    {
        f_array[i] += s_array[i]; // aggregate the sums into the first array
        cout << f_array[i] << " ";
    }
    return 0;
};


