// 3. Create a template function to perform linear search on an array of any data type.
#include <iostream>

using namespace std;

template <class T>
int linear_search(T arr[], int size, const T &key);
int main()
{
    int arr1[] = {5, 10, 1, 4, 9};
    int index1 = linear_search(arr1, 4, 4);
    cout << "Index of 9 in arr1: " << index1 << endl;
    double arr2[] = {3.2, 1.5, 9.8, 2.8};
    int index2 = linear_search(arr2, 4, 1.5);
    cout << "Index of 2.718 in arr2: " << index2 << endl;
    char arr3[] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};
    int index3 = linear_search(arr3, 8, 'o');
    cout << "Index of 'f' in arr3: " << index3 << endl;
    return 0;
}

template <class T>
int linear_search(T arr[], int size, const T &key)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return 0;
}
