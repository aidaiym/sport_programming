// 7. Write a template function to find the average of a set of numbers.

#include <iostream>

using namespace std;

template <class T>
T averageArr(const T *values, int size);

int main()
{
    int arr1[] = {5, 10, 1, 4, 9};
    std::cout << "Average of elements in arr1 is " << averageArr(arr1) << std::endl;

    double arr2[] = {3.2, 1.5, 9.8, 2.8};
    std::cout << "Average of elements in arr1 is " << averageArr(arr2) << std::endl;

    return 0;
}

template <class T>
T averageArr(const T *values, int size)
{
    T sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += values[i];
    }
    return sum / size;
}