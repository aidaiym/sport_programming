//  5. Implement a template function to calculate the factorial of a number.
#include <iostream>

using namespace std;

template <class T>
T factorial(T n);
int main() {
  int n1 = 10;
  cout << "Factorial of " << n1 << " is " << factorial(n1) << endl;
  double n2 = 10.5;
  cout << "Factorial of " << n2 << " is " << factorial(n2) << endl;
  return 0;
}


template <class T>
T factorial(T n) {
  if (n == 0) {
    return 1;
  }
  else {
    return n * factorial(n-1);
  }
}

