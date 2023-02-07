// Compare and sort three integers

#include <iostream>

using namespace std;

void swap(int &, int &);

int main()
{
    int first, second, third;
    cout << "Enter three integers: ";
    cin >> first >> second >> third;
    if (first > second)
        swap(first, second);
    if (second > third)
        swap(second, third);
    if (first > second)
        swap(first, second);
    cout << "The sorted integers are " << first << " , " << second << " , " << third << endl;
    return 0;
}

void swap(int &num_1, int &num_2)
{
    int temp;
    temp = num_1;
    num_1 = num_2;
    num_2 = temp;
}