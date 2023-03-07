// 1. Write a template function to find the maximum value of any type of data.
#include <iostream>

using namespace std;

template <class T>
T findMax(T a[], int size);
int main()
{
    char c[8] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};
    int A[5] = {5, 10, 1, 4, 9};
    double B[4] = {3.2, 1.5, 9.8, 2.8};
    cout << "Maximum value of char type of data: " << findMax(c, 8) << endl;
    cout << "Maximum value of int type of data: " <<  findMax(A, 5)<< endl;
    cout << "Maximum value of double type of data: " << findMax(B, 4) <<endl;
    return 0;
}

template<class T>
T findMax(T arr[], int size) {
    T maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
