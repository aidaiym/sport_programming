#include <iostream>

using namespace std;

template <class T>
void sort(T a[], int size);
int main()
{
    char c[8] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};
    sort(c, 8);
    int A[5] = {5, 10, 1, 4, 9};
    sort(A, 5);
    double B[4] = {3.2, 1.5, 9.8, 2.8};
    return 0;
}

template <class T>
void sort(T a[], int size)
{
    int i, p;
    T D;
    for (p = 1; p <= size - 1; p++)
        for (i = 0; i < size - 1; i++)
            if (a[i] > a[i + 1])
            {
                D = a[i];
                a[i] = a[i + 1];
                a[i + 1] = D;
            }

}