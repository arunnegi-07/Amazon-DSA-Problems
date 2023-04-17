#include<bits/stdc++.h>
using namespace std;

int minDist(int a[], int n, int x, int y) {
    // variables to store index if x and y values are matched
    int x_index = -1, y_index = -1;
        
    // setting ans value to MAX value because we want to find minimum distance
    int ans = INT_MAX; 
        
    // traversing over array to find minimum distance        
    for(int i=0;i<n;i++){
        // x_index and y_index if we find x and y
        if(x==a[i]) x_index = i;
        if(y==a[i]) y_index = i;
            
        // calculating distance only if both x and y value is found
        if(x_index != -1 &&  y_index != -1){
            // updating 'ans' if it is minimum than previous 'ans'
            // Note taking 'abs' because 'y' may be present before 'x' or after 'x', both cases are possible  
            ans = min(ans,abs(x_index - y_index));
               
            // This part is important one.
            // In set of given values it may possible that x and y may be present at different places.
               
            // See this Example:
            // 96 82 48 76 34 19 7 80 36 57 77 34 19 35 5 57 16 66 42 62 89 19 60 19 25 16 20 51 77 75 12 73 8 11 100 93 81
            // 58 72 17 14 48 2 33 82 6 41 49 72 34 10 12 53 21 30 77 36 49 79 13 75 42
            // x = 36 y = 33
               
            // so after finding distance between one set of 'x' and 'y' we must take care of other set of 'x' and 'y'.
            // For that below condition is added.
               
            // if lastest value matched is of 'x' then to start new series of 'x to y' we must set y_index = -1
            if(x_index == i) y_index = -1;
               
            // if lastest value matched is of 'x' then to start new series of 'y to x' we must set x_index = -1
            if(y_index == i) x_index = -1;
        }
    }

    // if after coming out of loop 'ans' is still same as it is initialized then return -1
    if(ans == INT_MAX) return -1 ; 
        
    // returning 'ans'
    return ans;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int x1 = 3, y1 = 9;
    cout << "Minimum distance between " << x1 << " and " << y1 << " in arr1: " << minDist(arr1, n1, x1, y1) << endl;
    
    int arr2[] = {5, 8, 10, 15, 12, 13};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int x2 = 5, y2 = 15;
    cout << "Minimum distance between " << x2 << " and " << y2 << " in arr2: " << minDist(arr2, n2, x2, y2) << endl;
    
    int arr3[] = {5, 8, 10, 15, 12, 13, 5, 10};
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    int x3 = 5, y3 = 10;
    cout << "Minimum distance between " << x3 << " and " << y3 << " in arr3: " << minDist(arr3, n3, x3, y3) << endl;
    
    return 0;
}