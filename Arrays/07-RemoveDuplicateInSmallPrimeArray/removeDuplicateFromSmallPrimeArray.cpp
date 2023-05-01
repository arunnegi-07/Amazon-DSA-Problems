// Approach : Using Unordered Map
// TC : O(N)  SC : O(1)

#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicate(vector<int>& arr, int n)
{
    // As contraint of 'arr' is "2<=arr[i]<100" and we know only 25 prime numbers
    // are possible which are less than 100
    // therefore in Worst Case '25' numbers are in the set, when all numbers given are unique
    // and still which is O(1) space complexity
    unordered_set<int> seen;
        
    // This vector will store the result
    // It will also take O(1)
    vector<int> res;
        
    // Traversing over the given array
    for (int i = 0; i < n; i++) {
        // if number in not present in the set means it is unique 
        // so we will push it in the set for further checking
        // and also add it in our answer as we need to maintain the same order as they are in 'arr'
        if (seen.find(arr[i]) == seen.end()) {
            seen.insert(arr[i]);
            res.push_back(arr[i]);
        }
    }
    
    // finally returning result
    return res;
}

int main() {
    // Sample input 1
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int n1 = arr1.size();
    vector<int> res1 = removeDuplicate(arr1, n1);
    cout << "Sample input 1:\n";
    for (int i = 0; i < res1.size(); i++) {
        cout << res1[i] << " ";
    }
    cout << endl;

    // Sample input 2
    vector<int> arr2 = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
    int n2 = arr2.size();
    vector<int> res2 = removeDuplicate(arr2, n2);
    cout << "Sample input 2:\n";
    for (int i = 0; i < res2.size(); i++) {
        cout << res2[i] << " ";
    }
    cout << endl;

    // Sample input 3
    vector<int> arr3 = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    int n3 = arr3.size();
    vector<int> res3 = removeDuplicate(arr3, n3);
    cout << "Sample input 3:\n";
    for (int i = 0; i < res3.size(); i++) {
        cout << res3[i] << " ";
    }
    cout << endl;

    return 0;
}
