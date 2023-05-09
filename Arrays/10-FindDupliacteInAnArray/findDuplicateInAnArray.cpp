// TC : O(NlogN)  SC : O(N)

#include <bits/stdc++.h>
using namespace std;

// This function takes an array of integers and its size as input 
vector<int> duplicates(int arr[], int n) {

    // Create an empty vector to store the duplicate elements
    vector<int> ans;

    // Create an unordered map to keep track of the frequency of each element in the array
    unordered_map<int , int> mp;

    // Iterate through the array and increment the frequency of each element in the map
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    // Iterate through the map and add the elements with frequency greater than 1 to the ans vector
    for(auto it:mp){
        if(it.second>1){
            ans.push_back(it.first);
        }
    }

    // If no duplicate element is found, add -1 to the ans vector
    if(ans.size()==0) ans.push_back(-1);

    // Sort the ans vector in non-decreasing order
    sort(ans.begin(), ans.end());

    // Return the ans vector
    return ans;
}

int main() {
    // Sample Input 1
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    vector<int> res1 = duplicates(arr1, n1);
    cout << "Duplicate elements in Sample Input 1: ";
    for (int i = 0; i < res1.size(); i++) {
        cout << res1[i] << " ";
    }
    cout << endl;

    // Sample Input 2
    int arr2[] = {1, 2, 3, 4, 5, 5, 6, 6, 7, 8, 9, 9};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> res2 = duplicates(arr2, n2);
    cout << "Duplicate elements in Sample Input 2: ";
    for (int i = 0; i < res2.size(); i++) {
        cout << res2[i] << " ";
    }
    cout << endl;

    return 0;
}