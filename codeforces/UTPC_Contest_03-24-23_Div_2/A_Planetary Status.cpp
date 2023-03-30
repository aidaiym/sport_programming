
#include <iostream>
 
using namespace std;
 
int
main ()
{
  long long n;
  cin >> n;
  if (n >= 1000 && n <= 10000000000)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}