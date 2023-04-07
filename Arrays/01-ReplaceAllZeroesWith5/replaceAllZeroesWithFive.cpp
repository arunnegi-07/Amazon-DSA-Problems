#include <iostream>
#include <cmath>
using namespace std;


int convertFive(int n) {
    int ans = 0;  // Variable to store answer
    int place = 1;  // Initialize the place value of the digit
    
    // Iterate over each digit of the input integer
    while(n){
        int rem = n % 10;  // Get the remainder of the current digit
        n = n/10;  // Remove the current digit from the input integer
        
        // If the current digit is 0, replace it with 5
        if(!rem) rem = 5;
        
        // Add the digit to the answer in the correct place value
        ans += rem * place; 
        place *= 10;
    }
    
    // Return the ans
    return ans;
}

int main() {
    // Sample input and output
    int num1 = 10520;
    cout << convertFive(num1) << endl;  // Output: 15525
    
    // Sample input and output
    int num2 = 2020;
    cout << convertFive(num2) << endl;  // Output: 2525
    
    // Sample input and output
    int num3 = 987654321;
    cout << convertFive(num3) << endl;  // Output: 987654321
    return 0;
}
