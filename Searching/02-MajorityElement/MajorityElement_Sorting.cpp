// Approach 1 : Using Sorting
// TC : O(NlogN)  SC : O(1)

#include <bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n) {
    // Step 1: Sort the array in non-decreasing order
    sort(arr, arr + n);

    int count = 1;  // Keep track of the count of the current element
    int majority = arr[0];  // Initialize the current element as the majority

    // Step 2: Iterate through the sorted array
    for (int i = 1; i < n; i++) {
        // If the current element is the same as the majority element
        if (arr[i] == majority) {
            count++;  // Increment the count

            // If the count exceeds half the size of the array,
            // return the majority element as the result
            if (count > n / 2)
                return majority;
        } else {
            // If the current element is different from the majority element,
            // update the majority element and reset the count
            count = 1;
            majority = arr[i];
        }
    }

    // If no majority element is found, return -1
    return -1;
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
