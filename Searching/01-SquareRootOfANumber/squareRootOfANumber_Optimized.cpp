// TC : O(logN)  SC : O(1)

#include <iostream>

// Function to calculate the floor square root of a given number
long long int floorSqrt(long long int number) {
    long long int left = 0;  // Initialize the left pointer
    long long int right = number;  // Initialize the right pointer

    // Binary search loop
    while (left <= right) {
        long long int mid = (left + right) / 2;  // Calculate the middle element
        long long int square = mid * mid;  // Calculate the square of the middle element
        
        if (square == number)  // Case of perfect square
            return mid;
        else if (square < number)
            left = mid + 1;  // Adjust the left pointer if the square is less than the number
        else
            right = mid - 1;  // Adjust the right pointer if the square is greater than the number
    }
    
    // If the loop terminates, the right pointer will be the largest integer whose square is less than or equal to the number
    return right;
}

int main() {
    // Sample inputs
    long long int number1 = 16;  // Expected output: 4 (4^2 = 16)
    long long int number2 = 25;  // Expected output: 5 (5^2 = 25)
    
    // Calculate and print the floor square root of the sample inputs
    std::cout << "Floor square root of " << number1 << " is: " << floorSqrt(number1) << std::endl;
    std::cout << "Floor square root of " << number2 << " is: " << floorSqrt(number2) << std::endl;
    
    return 0;
}
