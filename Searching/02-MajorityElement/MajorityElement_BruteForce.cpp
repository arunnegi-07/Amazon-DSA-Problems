// Approach 1 : BruteForce Method
// TC : O(N^2)  SC : O(1)

#include <iostream>
using namespace std;

int majorityElement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > n / 2)
            return arr[i];
    }
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
