// Approach 1 : Brute Force
// TC : O(sqrt(N))  SC : O(1)

#include <iostream>
using namespace std;

/*
    Function to find the floor square root of a given number x.
    If x is not a perfect square, then it returns the floor value of sqrt(x).
*/
long long int floorSqrt(long long int x) {
    if (x == 0 || x == 1) {
        return x; // Return x if it is 0 or 1
    }

    long long int i = 1;
    long long int result = 1;

    while (result <= x) {
        i++;
        result = i * i;
    }

    return i - 1; // Return the largest number whose square is less than or equal to x
}

int main() {
    // Sample inputs
    long long int x1 = 5; // Non-perfect square example
    long long int x2 = 4; // Perfect square example

    // Compute the floor square root of x1
    long long int sqrt1 = floorSqrt(x1);
    cout << "Floor square root of " << x1 << " is: " << sqrt1 << endl;

    // Compute the floor square root of x2
    long long int sqrt2 = floorSqrt(x2);
    cout << "Floor square root of " << x2 << " is: " << sqrt2 << endl;

    return 0;
}
