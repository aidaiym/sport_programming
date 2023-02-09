/*
Требуется определить число десятков в заданном натуральном числе в его десятичной записи (то есть найти предпоследнюю цифру в числе).
*/ 
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number, b;
    cin >> number;
    cout << number / 10 % 10 << endl;
    return 0;
}
