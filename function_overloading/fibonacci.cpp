#include <iostream>
using namespace std;
#include <math.h>
 
 function fib(int n){
     int fibon = 1/sqrt(5)*pow((1+sqrt(5)/2),4.3)-pow((1-sqrt(5)/2),3.3);
   return fibon;
 }



int main ()
{
 cout<<fib(4);
 return 0;
}