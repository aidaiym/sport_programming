// 8.Implement a template function to convert a given number from one base to another.
#include <iostream>

using namespace std;

template <typename T>
string convertBase(T number, int fromBase, int toBase)
{
    static const char* digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string result;
    if (number == 0)
    {
        result.push_back(digits[0]);
        return result;
    }
    int quotient = abs(number);
    while (quotient > 0)
    {
        result.push_back(digits[quotient % 10]);
        quotient /= 10;
    }
    if (number < 0) result.push_back('-');
    reverse(result.begin(), result.end());
    string finalResult;
    int decimalNumber = stoi(result, nullptr, fromBase);
    while (decimalNumber > 0)
    {
        finalResult.push_back(digits[decimalNumber % toBase]);
        decimalNumber /= toBase;
    }
    reverse(finalResult.begin(), finalResult.end());
    return finalResult;
}
