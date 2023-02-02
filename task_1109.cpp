/*
Напишите программу, которая считывает целое число и выводит текст с упоминанием следующего и предыдущего для него чисел.
*/ 
#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    int a,b,c;
    cin>>a;
    b = a+1;
    c = a-1;
    cout<<"The next number for the number "<<a<<" is "<<b<<"."<<endl;
    cout<<"The previous number for the number "<<a<<" is "<<c<<".";
    return 0;
}