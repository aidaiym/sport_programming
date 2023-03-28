/*
C. Calibration Complications
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Another metric scientists use to determine planethood is the mass of the celestial object. Notably, a planet has to be massive enough to be the defining object in its orbit.

Measuring the mass of a planet is a lot harder than measuring its size, since a planet's density can vary widely. Scientists have been using a specialized tool to measure Pluto's mass, but they've discovered that the tool is faulty, and hasn't be calibrated in decades!

They need your help to re-calibrate the tool. You'll be given two rows of diodes, represented by arrays. In a single operation, you can add 1 to any value in the first array. Alternatively, in a single operation, you can subtract 1 from any value in the second array. You want to minimize the number of operations you make. How many operations are required to make all values in both arrays equal? Output -1 if this is not possible.

The fate of Pluto depends on it!

Input
The first line contains a single integer 𝑁
 (1≤𝑁≤105
), the length of the two arrays.

The second line contains 𝑁
 integers 𝑎1,𝑎2,...,𝑎𝑁
 (1≤𝑎𝑖≤109
), the values for the first array.

The third line contains 𝑁
 integers 𝑏1,𝑏2,...,𝑏𝑁
 (1≤𝑏𝑖≤109
), the values for the second array.

Output
Print out a single integer, the number of operations required to make all values in both arrays equal, or output -1 if this is not possible. This integer may not fit in a standard 32-bit integer, so make sure you are using 64-bit integers!
*/ 

