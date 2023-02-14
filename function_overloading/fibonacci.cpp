#include <iostream>
using namespace std;
 
 int fib(int n){
   return 1/sqrt(5)*pow((1+sqrt(5)/2),n)-pow((1-sqrt(5)/2),n);
 }



int main ()
{
 cout<<fib(10);
 return 0;
}