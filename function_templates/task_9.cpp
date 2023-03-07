// 9. Write a template function to reverse the elements of an array
#include <iostream>

using namespace std;

template <class T>
void reverseArray(T (&arr)[N]);
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    double B[4] = {3.2, 1.5, 9.8, 2.8};
    char c[8] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};
    reverseArray(arr);
    reverseArray(B);
    reverseArray(c);
    return 0;
}

template <typename T, size_t N>
void reverseArray(T (&arr)[N])
{
    for (size_t i = 0; i < N / 2; ++i)
    {
        std::swap(arr[i], arr[N - i - 1]);
    }
}

template <class T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}