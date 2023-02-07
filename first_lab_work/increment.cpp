#include <iostream>

using namespace std;

void Increment(int Number)
{
    Number = Number + 1;
    cout << "The parameter Number: "<< Number << endl;
}

int main()
{

    int Inc = 10;
    Increment(Inc); // parameter is a variable
    cout << "The variable Inc is: " << Inc << endl;
    return 0;
}