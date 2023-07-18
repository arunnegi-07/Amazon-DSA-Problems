// TC : O(N)  SC : O(N)
// Note : Refer to "Intuition" file attached to get clear explaination behind the problem.

#include <iostream>
using namespace std;

long long trappingWater(int arr[], int n) {
    // Initialize arrays to store the maximum heights from the left and right sides
    int leftMax[n], rightMax[n];
    
    // Calculate the maximum height from the left side for each index
    leftMax[0] = arr[0]; // The first block will have its own height as the left maximum
    for(int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], arr[i]); // The left maximum is the maximum of the previous left maximum and the current block height
    }
    
    // Calculate the maximum height from the right side for each index
    rightMax[n - 1] = arr[n - 1]; // The last block will have its own height as the right maximum
    for(int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], arr[i]); // The right maximum is the maximum of the next right maximum and the current block height
    }

    long long trappedWater = 0; // Variable to store the total trapped water

    // Calculate the trapped water at each index
    for(int i = 1; i < n - 1; i++) {
        trappedWater += min(leftMax[i], rightMax[i]) - arr[i]; // The trapped water is the minimum of the left and right maximum heights minus the current block height
    }
    
    return trappedWater; // Return the total trapped water
}

int main() {
    // Sample input 1
    int arr1[] = {3, 0, 0, 5, 0, 4, 0, 0, 3, 0, 0, 5, 0, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    
    long long trappedWater1 = trappingWater(arr1, n1);
    cout << "Trapped Water 1: " << trappedWater1 << endl;

    // Sample input 2
    int arr2[] = {7, 0, 4, 2, 5, 0, 6, 4, 0, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    long long trappedWater2 = trappingWater(arr2, n2);
    cout << "Trapped Water 2: " << trappedWater2 << endl;

    return 0;
}
