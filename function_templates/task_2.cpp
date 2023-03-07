// 2. Implement a template function to sort an array in ascending or descending order.
#include <iostream>

using namespace std;

template <class T>
void sortAscending(T arr[], int size);
template <class T>
void sortDescending(T arr[], int size);
int main()
{
    char c[8] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};
    sortAscending(c, 8);
    sortDescending(c, 8);
    int A[5] = {5, 10, 1, 4, 9};
    sortAscending(A, 5);
    sortDescending(A, 5);
    double B[4] = {3.2, 1.5, 9.8, 2.8};
    sortAscending(B, 4);
    sortDescending(B, 4);
    return 0;
}

template<class T>
void sortAscending(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ( arr[j] < arr[i]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template<class T>
void sortDescending(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ( arr[j] > arr[i]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
