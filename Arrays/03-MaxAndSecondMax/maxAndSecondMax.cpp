#include <bits/stdc++.h>
using namespace std;

// Approach 1 : Using Sorting 
// TC : O(N*logN)  SC : O(1)
// Drawback of this approach is that it will fail if both arr[0] and arr[1] are equal or we can say all elements are equal.
// As our requirement is to have different max and secondMax.

// Function to find the third largest element in an array
// vector<int> largestAndSecondLargest(int arr[], int n){
//     // Sorting Array in Descending order
//     sort(arr, arr + n, greater<int>());
    
//     vector<int> ans;
     
//     // Add the maximum and second maximum values to the answer vector
//     ans.push_back(arr[0]);
//     ans.push_back(arr[1]);
    
//     return ans; // returning ans vector
// }

// Approach 2 : Using Two varibales max and max2 
// TC : O(N)  SC : O(1)

vector<int> largestAndSecondLargest(int arr[],int sizeOfArray){
    
    // Initialize variables to store the maximum and second maximum values found so far
    int max = INT_MIN, max2= INT_MIN;
    
    // Initialize a vector to store the answer
    vector<int> ans;
    
    // Loop through the array and update the maximum and second maximum values
    for(int i=0;i<sizeOfArray;i++){
        
        // If the current element is greater than the maximum value, update both max and max2
        if(max < arr[i]){
            max2 = max;
            max = arr[i];
        }
        // Otherwise, if the current element is greater than the second maximum value 
        // and not equal to the maximum value, update max2
        else if(max2 < arr[i] && arr[i] != max){
            max2 = arr[i];
        }
    }
    
    // Add the maximum and second maximum values to the answer vector
    ans.push_back(max);
    ans.push_back(max2);
    
    // Return the answer vector
    return ans;
}

// Approach 3 : Ternary Operator version of Approach 2 
// TC : O(N)  SC : O(1)

// This function takes an array and its size as input and returns a vector 
// containing the largest and second largest elements in the array. If there 
// are less than 2 elements in the array, the function returns -1 for the 
// second largest element.
vector<int> largestAndSecondLargest(int arr[],int sizeOfArray){
    // Initialize variables to store the maximum and second maximum values found so far
    int max = INT_MIN, max2= INT_MIN;
    // Initialize a vector to store the answer
    vector<int> ans;
        
    for(int i=0;i<sizeOfArray;i++){                                          
        (max < arr[i]) ? (max2 = max, max = arr[i]) : (max2 < arr[i] && arr[i] != max) ?  max2 = arr[i] : max2 = max2;
    }

    // Add the maximum and second maximum values to the answer vector
    // If either value is not found, add -1 instead  
    ans.push_back(max); 
    ans.push_back(max2); 
        
    return ans;
}

int main(){
    // Sample input 1
    int arr1[] = {3, 6, 1, 8, 4, 9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    
    if(n1 < 1){
        cout << "First and Second Largest elements in arr1 are: " << "-1" << " -1" << endl;
    }
    else if (n1 < 2) {
        cout << "First and Second Largest elements in arr1 are: " << arr1[0] << " -1" << endl;
    } else {
        vector<int> ans1 = largestAndSecondLargest(arr1,n1);
        cout << "First and Second Largest elements in arr1 are: " << ans1[0] << " " << ans1[1] << endl;
    }

    // Sample input 2
    int arr2[] = {9, 6, 1, 8, 4, 9};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    if(n1 < 1){
        cout << "First and Second Largest elements are: " << "-1" << " -1" << endl;
    }
    if (n2 < 2) {
        cout << "First and Second Largest elements are: " << arr2[0] << " -1" << endl;
    }
    else {
        vector<int> ans2 = largestAndSecondLargest(arr2,n2);
        cout << "First and Second Largest elements in arr1 are: " << ans2[0] << " " << ans2[1] << endl;
    }

    return 0;
}