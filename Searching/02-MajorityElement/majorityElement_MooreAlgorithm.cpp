// Approach 4 : Using Moore's Algorithm
// TC : O(N)  SC : O(1)

#include <bits/stdc++.h>
using namespace std;

// Function to find the majority element in the array
int majorityElement(int a[], int size)
{
    // Step 1: Find the candidate which is likely to be the majority element
    int count = 0;       // Counter to keep track of the current element's count
    int candidate;       // Variable to store the potential candidate for the majority element
    
    // Iterate through the array
    for (int i = 0; i < size; i++) {
        if (count == 0) {
            // If the count is 0, update the candidate to the current element
            candidate = a[i];
            count++;
        }
        else if (a[i] != candidate) {
            // If the current element is different from the candidate, decrement the count
            count--;
        }
        else {
            // If the current element is the same as the candidate, increment the count
            count++;
        }
    }
 
    // Step 2: Check if the candidate is really in the majority or not
    int candCount = 0;   // Counter to count the occurrences of the candidate in the array
    
    // Iterate through the array again
    for (int i = 0; i < size; i++) {
        if (a[i] == candidate) {
            // If the current element matches the candidate, increment the count
            candCount++;
        }
    }
    
    // Step 3: Check if the candidate appears more than n/2 times (where n is the size of the array)
    if (candCount > size/2)
        return candidate;   // Return the majority element
    else
        return -1;          // If there is no majority element, return -1
}

int main() {
    // Sample Input 1
    int arr1[] = {1, 2, 3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int result1 = majorityElement(arr1, n1);
    if (result1 != -1)
        cout << "Sample Input 1 - Majority element: " << result1 << endl;
    else
        cout << "Sample Input 1 - No majority element found." << endl;

    // Sample Input 2
    int arr2[] = {3, 1, 3, 3, 2};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int result2 = majorityElement(arr2, n2);
    if (result2 != -1)
        cout << "Sample Input 2 - Majority element: " << result2 << endl;
    else
        cout << "Sample Input 2 - No majority element found." << endl;

    return 0;
}
