#include <bits/stdc++.h>
using namespace std;

// Approach 1 : Using Sorting 
// TC : O(N*logN)  SC : O(1)

// Function to find the third largest element in an array
int thirdLargest(int arr[], int n){
    // Sorting Array in Descending order
    sort(arr, arr + n, greater<int>());
    
    return arr[2]; // returning third element (0-based indexing) which is 3rd Largest in Descending order Array.
}

---------------------------------------------------------------------------------------------------------------------------------------------------------------------
    -------------------------------------------------------------------------------------------------------------------------------------------------------------

// Approach 2 : Using Three Pointers 
// TC : O(N)  SC : O(1)

// Function to find the third largest element in an array
int thirdLargest(int arr[], int n){
    int firstMax = INT_MIN, secondMax = INT_MIN, thirdMax = INT_MIN;
    for(int i=0; i<n; i++){
        // If current element is greater than the firstMax
        if(arr[i] > firstMax){
            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = arr[i];
        }
        // If current element is greater than the secondMax but less than or equal to firstMax
        else if(arr[i] > secondMax && arr[i] <= firstMax){
            thirdMax = secondMax;
            secondMax = arr[i];
        }
        // If current element is greater than the thirdMax but less than or equal to secondMax
        else if(arr[i] > thirdMax && arr[i] <= secondMax){
            thirdMax = arr[i];
        }
    }
    return thirdMax;
}


---------------------------------------------------------------------------------------------------------------------------------------------------------------------
    -------------------------------------------------------------------------------------------------------------------------------------------------------------

// Approach 3 : Ternary Operator version of Approach 2 
// TC : O(N)  SC : O(1)

// Function to find the third largest element in an array
int thirdLargest(int arr[], int n){
    //Your code here
    int firstMax = INT_MIN, secondMax = INT_MIN, thirdMax = INT_MIN;
         
    for(int i=0;i<n;i++){
        firstMax < arr[i] ? (thirdMax = secondMax, secondMax = firstMax, firstMax = arr[i]) : secondMax < arr[i] ? (thirdMax = secondMax,secondMax = arr[i]) : thirdMax < arr[i] ? thirdMax = arr[i] : thirdMax = thirdMax;
    }
    return thirdMax;
}


---------------------------------------------------------------------------------------------------------------------------------------------------------------------
    -------------------------------------------------------------------------------------------------------------------------------------------------------------

int main(){
    // Sample input 1
    int arr1[] = {3, 6, 1, 8, 4, 9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    if (n1 < 3) {
        cout << "Array doesn't have a third largest element." << endl;
    } else {
        cout << "Third largest element in arr1 is:" << thirdLargest(arr1, n1) << endl;
    }

    // Sample input 2
    int arr2[] = {9, 6, 1, 8, 4, 9};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    if (n2 < 3) {
        cout << "Array doesn't have a third largest element." << endl;
    } else {
        cout << "Third largest element in arr2 is:" << thirdLargest(arr2, n2) << endl;
    }

    // Sample input 3
    int arr3[] = {4, 4, 4, 4, 4, 4};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    if (n3 < 3) {
        cout << "Array doesn't have a third largest element." << endl;
    } else {
        cout << "Third largest element in arr3 is:" << thirdLargest(arr3, n3) << endl;
    }

    return 0;
}
