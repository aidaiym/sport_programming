// 4. Write a template function to swap two variables of any type.
#include <iostream>

using namespace std;
template <class T>
void swap(T &a, T &b);
int main()
{
    int x = 5, y = 10;
    swap(x,y);
    double a = 3.14, b = 453.618;
    swap(a,b);
    char c = 'a', d = 'b';
    swap(c,d);
    return 0;
}

template <class T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
