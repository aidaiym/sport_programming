/*
Требуется написать программу, определяющую, является ли четырехзначное натуральное число N палиндромом, т.е. числом, которое одинаково читается слева направо и справа налево.
*/ 
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
        cout << "YES"<<a/1000<<a %1000<<a/100 <<a %100;

    if (a/1000 == a %1000 && a/100 == a %100  )
        cout << "YES"<<a/1000<<a %1000<<a/100 <<a %100;

    else 
        cout << "NO"<<endl;
        return 0;
}