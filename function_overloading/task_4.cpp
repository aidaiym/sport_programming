/*
4. Overload a function that takes two arrays as input and returns the sum of their elements. 
The function should be overloaded to handle arrays of different data types such as integers, doubles, and characters.
*/

#include <iostream>
using namespace std;

double arr(int f_array[5], int s_array[5]);
double arr(double f_array[5], double s_array[5]);
double arr(char f_array[5], char s_array[5]);

int main()

{
    for(int i = 0; i<5; i++){
        cout<<"Enter arrays values"<<endl;
        cin>>arr[i];
    }
    return 0;
}

double arr(int f_array[], int s_array[]){return f_array[]+s_array[];};
double arr(double f_array[], double s_array[]){return f_array+s_array;};
double arr(char f_array[], char s_array[]){return f_array+s_array;};

