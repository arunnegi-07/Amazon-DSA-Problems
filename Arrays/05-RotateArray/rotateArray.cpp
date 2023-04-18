#include <bits/stdc++.h>
using namespace std;

// Approach 1 : Brute Force 
// TC : O(N^2)  SC : O(1)

// Function to rotate an array left by d positions
void rotateArr(int arr[], int d, int n) {

    // taking Modulo because if we rotate any array by it's size then we got the same Array
    // so if n = 5 and d = 6 then 6 % 5 = 1 i.e rotating array '6' times has same affect rotating it '1' time for n = 5
    d = d % n;

    // Outer loop iterates d times to rotate the array by k positions
    for (int i = 0; i < d; i++) {
        // Store the first element of the array in a temporary variable
        int temp = arr[0];
        // Inner loop shifts each element of the array one position to the left
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        // Replace the last element of the array with the stored first element
        arr[n - 1] = temp;
    }
}

// Approach 2 : Best Analysed Approach
// Discussed in Intuition file Attached with this Problem
// TC : O(N)  SC : O(1)

void rotateArr(int arr[], int d, int n){
        // taking Modulo because if we rotate any array by it's size then we got the same Array
        // so if n = 5 and d = 6 then 6 % 5 = 1 i.e rotating array '6' times has same affect rotating it '1' time for n = 5
        d = d % n;

        // reversing first 'd' part of the array
        reverse(arr,arr+d);
        // reversing remaining 'n-d' part of the array
        reverse(arr+d,arr+n);
        // reversing whole array
        reverse(arr,arr+n);
}

int main() {
    // Declare and initialize an array of integers
    int arr[] = {1, 2, 3, 4, 5};
    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    // Define the amount of rotation
    int d = 2;

    // Call the rotateLeft function to rotate the array
    rotateArr(arr, d, n);

    // Print the rotated array to the console
    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
