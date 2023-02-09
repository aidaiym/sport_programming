/*
Даны два натуральных числа. Требуется проверить: делится ли одно из них на другое?
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number1, number2;
    cin >> number1 >> number2;

    if (number1 % number2 == 0 || number2 % number1 == 0)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "666" << endl;
    }

    return 0;
}
