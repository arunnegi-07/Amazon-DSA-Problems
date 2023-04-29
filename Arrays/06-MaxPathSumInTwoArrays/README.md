## Problem : Max Path Sum in Two Arrays (Easy)
Given two sorted arrays ```A``` and ```B``` of size ```M``` and ```N``` respectively. Each array may have some elements in common with the other array. 
Find the maximum sum of a path from the beginning of any array to the end of any of the two arrays.<br>
We **may** switch from one array to another array only at the common elements.Both the arrays are sorted.<br>
**Note:** Only one repeated value is considered in the valid path sum.

**Example 1:**
```
Input:
M = 5, N = 4
A[] = {2,3,7,10,12}
B[] = {1,5,7,8}

Output: 35

Explanation: The path will be 1+5+7+10+12 = 35.
```

**Example 2:**
```
Input:
M = 3, N = 3
A[] = {1,2,3}
B[] = {3,4,5}

Output: 15

Explanation: The path will be 1+2+3+4+5=15.
```

**Your Task:**
```
You don't need to read input or print anything. Complete the function max_path_sum() which takes the two arrays A and B 
along with their sizes M and N as input parameters. It returns the maximum path sum.
```

**Expected Time Complexity:** ```O(M + N)```<br>
**Expected Auxiliary Space:** ```O(1)```


**Constraints:**
<li><code>1 <= M,N <= 10<sup>4</sup></code></li>
<li><code>1 <= A[i], B[i] <= 10<sup>4</sup></code></li>
