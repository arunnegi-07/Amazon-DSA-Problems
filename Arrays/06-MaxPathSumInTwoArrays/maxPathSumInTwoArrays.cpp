// Approach : Similar to Merge Sort's Merge Function
// TC :  O(m+n)  SC : O(1)

#include<bits/stdc++.h>
using namespace std;

int max_path_sum(int A[], int B[], int m, int n){
    // initialize indexes for A[] and B[]
    int i = 0, j = 0;

    // Initialize 'ans' and current sum through A[] and B[].
    int ans = 0, sumA = 0, sumB = 0;

    // Below Algo is similar to merge in merge sort
    while (i < m && j < n) {
        // Add elements of A[] to sumA
        if (A[i] < B[j])
            sumA += A[i++];

        // Add elements of B[] to sumB
        else if (A[i] > B[j])
            sumB += B[j++];

        else // we reached a common point
        {
            // Take the maximum of two sums and add it to 'ans'
            // Also add the that common element to the 'ans'
            ans += max(sumA, sumB) + A[i];

            // Update sumA and sumB back to '0' after this intersection point
            sumA = 0;
            sumB = 0;

            // update i and j to move to next element of each array
            i++;
            j++;
        }
    }

    // Add remaining elements of ar1[]
    while (i < m)
        sumA += A[i++];

    // Add remaining elements of ar2[]
    while (j < n)
        sumB += B[j++];

    // Add maximum of two sums of remaining elements
    ans += max(sumA, sumB);

    return ans;
}

int main() {
    // Sample Input 1
    int A[] = {2, 3, 7, 10, 12};
    int B[] = {1, 5, 7, 8};
    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(B) / sizeof(B[0]);
    cout << "Maximum Path Sum: " << max_path_sum(A, B, m, n) << endl;

    // Sample Input 2
    int C[] = {10, 12};
    int D[] = {5, 7, 9};
    m = sizeof(C) / sizeof(C[0]);
    n = sizeof(D) / sizeof(D[0]);
    cout << "Maximum Path Sum: " << max_path_sum(C, D, m, n) << endl;

    // Sample Input 3
    int E[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int F[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    m = sizeof(E) / sizeof(E[0]);
    n = sizeof(F) / sizeof(F[0]);
    cout << "Maximum Path Sum: " << max_path_sum(E, F, m, n) << endl;

    return 0;
}
