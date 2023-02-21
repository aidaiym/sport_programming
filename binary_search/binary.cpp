#include <iostream>
using namespace std;

int bsearch(const int data[], int size,int value)
{ 
    int first, last, upper;
    first = 0;
    last = size - 1;
    while (true)
    {
        middle = (first + last) / 2;
        if (data[middle] == value)
            return middle;
        else if (first >= last)
            return -1;
        else if (value < data[middle])
            last = middle - 1;
        else
            first = middle + 1;
    }
}
int main()
{
    const int array_size = 8;
    int list[array_size] = {1, 2, 3, 5, 7, 10, 14, 17};
    int search_value;
    cout << "Enter search value: ";
    cin >> search_value;
    cout << bsearchr(list, 0, array_size - 1, search_value) << endl;

    return 0;
}
