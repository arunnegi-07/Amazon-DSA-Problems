// Approach 3 : Using Unordered Map
// TC : O(N) --> because using unorderedMap  SC : O(N)

#include <bits/stdc++.h>
using namespace std;

int majorityElement(int a[], int size) {
    unordered_map<int, int> m; // Unordered map to store element-frequency pairs
    int greater = 0; // Variable to store the majority element frequency threshold

    for (int i = 0; i < size; i++) {
        m[a[i]]++; // Increment the frequency of the current element

        if (m[a[i]] > size / 2) { // Check if the frequency of the current element is greater than size/2
            return a[i]; // Return the current element as the majority element
        }
    }

    return -1; // If no majority element is found, return -1
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
