## Problem : Remove Duplicate From Small Prime Array (Easy)
Given an array consisting of only prime numbers, remove all duplicate numbers from it. 

**Example 1:**
```
Input:
N = 6
A[] = {2,2,3,3,7,5}

Output: 2 3 7 5

Explanation: After removing the duplicate
2 and 3 we get 2 3 7 5.
```

**Your Task:**
```
Complete the function removeDuplicate() that takes the array of integers and N as input parameters and returns the 
modified array which has no duplicates. Retain only the first occurrence of the duplicate element. The elements in 
the returning array should be in the same order as they appear in the original array.
```

**Expected Time Complexity:** ```O(N)```<br>
**Expected Auxiliary Space:** ```O(1)```

**Constraints:**
<li><code>1 <= N <= 10<sup>6</sup></code></li>
<li><code>2<=A[i] < 100</code></li>
