/*
Overload a function that takes a single string as input and returns its length.
The function should be overloaded to handle strings of different data types such as characters and integers.
*/ 
#include <iostream>
#include <string> 
using namespace std;

int sString(string txt);
int sString(int txt);
int sString(char txt);

int main()
{
    int a = 232;
    char b = '!';
    string c = "hello";
    cout << "String as characters " << sString(b) << "\n";
    cout << "String as string " << sString(c) << "\n";
    cout << "String as integer " << sString(a) << "\n";
    return 0;
}

int sString(int txt){ return to_string(txt).length();};
int sString(string txt){  return txt.length();};
int sString(char txt){ return  to_string(txt).length();};




