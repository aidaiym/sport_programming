/*
A. Planetary Status
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Ever since Pluto was named, scientists around the world have debated its status as a planet. Many prominent scientists argue that Pluto is simply too small to qualify as there are even asteroids larger than it within our solar system.

NASA has decided to test this and have come up with a new metric to see whether Pluto qualifies as a planet. Scientists have declared that to be a planet, Pluto must be at least as large as the smallest known star which is 1,000 miles in radius.

All stars in the universe look like typical five-pointed stars and Pluto is represented as a circle. To be bigger than a star, the entire star must be contained within a circle with radius equal to Pluto's radius.

To this day, astronomers have not figured out Pluto's true radius. Their best guess is that Pluto has a radius of 𝑛
 miles. Given this estimate, please report whether Pluto should be considered a planet or not.

Input
The input will consist of a single integer, 𝑛
 (1≤𝑛≤109
), representing Pluto's radius.

Output
The output should consist of either "YES" or "NO" (no quotes, case insensitive) based on whether Pluto qualifies as a planet or not by the above criteria.
*/ 

#include <iostream>
 
using namespace std;
 
int
main ()
{
  long long n;
  cin >> n;
  if (n > 1 && n <= 10000000000)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}