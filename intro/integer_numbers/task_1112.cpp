/*
Найдите сумму цифр трехзначного натурального числа.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number, sum;
    cin >> number;
    sum = (number % 10) + (number / 10 % 10) + (number / 100 % 10);
    cout << sum << endl;
    return 0;
}
