// 6. Create a template function to find the sum of elements of an array.
#include <iostream>

using namespace std;

template <typename T, int N>
T array_sum(T (&arr)[N]);

int main()
{
    int arr1[] = {5, 10, 1, 4, 9};
    std::cout << "Sum of elements in arr1 is " << array_sum(arr1) << std::endl;

    double arr2[] = {3.2, 1.5, 9.8, 2.8};
    std::cout << "Sum of elements in arr2 is " << array_sum(arr2) << std::endl;

    return 0;
}

template <typename T, int N>
T array_sum(T (&arr)[N])
{
    T sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }
    return sum;
}
