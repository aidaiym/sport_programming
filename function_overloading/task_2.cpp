/*
2. Overload a function that takes two strings as input and concatenates them. 
The function should be overloaded to handle different combinations of strings, characters, and integers.
*/

#include <iostream>
using namespace std;

string concatenatesString(string a, string b);
char concatenatesString(char a, char b);
double concatenatesString(int a, int b);


int main()

{
    string x, y;
    cout << "Enter 2 strings \n ";
    cin >> x >> y;
    cout << "Concatenate of 2 string = " << concatenatesString(x, y) << endl;
    char m, n;
    cout << "Enter 2 char \n";
    cin >> m >> n;
    cout << "Concatenate of 2 char = " << concatenatesString(m, n) << endl;
    int c, d;
    cout << "Enter 2 integers \n ";
    cin >> c >> d;
    cout << "Concatenate of 2 integer = " << concatenatesString(c, d) << endl;
    return 0;
}

string concatenatesString(string a, string b){return a+b;};
char concatenatesString(char a, char b){return a+b;};;
double concatenatesString(int a, int b){return a+b;};;
