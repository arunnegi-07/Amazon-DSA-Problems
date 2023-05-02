/* Approach : Some pre-calculation needs to be done in order to solve this problem in Linear time
              as we don't want to take one loop to traverse and another inside it to rotate array
              every time and check which rotation is giving the maximum sum of i*A[i].
 
    TC : O(N)  SC : O(1)               
                                                                                                      */
                                                                                                     
#include <iostream>
using namespace std;

int max_sum(int A[],int N)
{
    // So we have to calculate initial sum i.e total sum of elements of A[] and
    // rotation_sum i.e total sum of i*A[i], 
    // when Array is not been rotated (i.e given array)
    int sum = 0, rotation_sum = 0;

    // Calculate initial sum and rotation sum
    for (int i = 0; i < N; i++) {
        sum += A[i];
        rotation_sum += i * A[i];
    }
    
    // This element will store max_sum which is possible among all the possible rotations
    int max_sum = rotation_sum;

    // Try all possible rotations and update max_sum
    for (int i = 1; i < N; i++) {
        // Below line you can easily understand just by dry running, it is observation based
        // Also, note we cosidering right shift so dry run accordingly
        rotation_sum = rotation_sum + sum - N * A[N - i];
        // amnd everytime consider maximum sum out of all sum's
        max_sum = max(max_sum, rotation_sum);
    }
    
    // Finally returning max_sum
    return max_sum;
}

int main() {
    int A1[] = {1, 2, 3, 4, 5};
    int N1 = sizeof(A1) / sizeof(A1[0]);
    cout << "Maximum sum after rotation for A1[]: " << max_sum(A1, N1) << endl;

    int A2[] = {5, 4, 3, 2, 1};
    int N2 = sizeof(A2) / sizeof(A2[0]);
    cout << "Maximum sum after rotation for A2[]: " << max_sum(A2, N2) << endl;

    return 0;
}
