/*
B. Pluto Discovery!
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Pluto has just been named a planet! However, one of NASA's satellites thinks that in 𝑛
 (1≤𝑛≤105
) years, an asteroid will come and destroy the planet. In order to save Pluto, NASA needs to calculate the sum of all remainders when 𝑛
 is divided by every number from 1 to 𝑛
, inclusive.

Input
The first and only line of input will contain 𝑛
 (1≤𝑛≤105
).

Output
Output a single integer, denoting the number that NASA needs you to calculate.
*/

#include <iostream>

using namespace std;

int main()
{
    int n, sum_remainders = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum_remainders += n % i;
    }

    cout << sum_remainders;
    return 0;
}