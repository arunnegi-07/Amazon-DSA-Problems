## Problem : Insert in a Sorted List (Easy) 
Given a linked list sorted in ascending order and an integer called data, insert data in the linked list such that the list remains sorted.

**Example 1:**
```
Input:
LinkedList: 25->36->47->58->69->80
data: 19

Output: 19 25 36 47 58 69 80
```

**Example 2:**
```
Input:
LinkedList: 50->100
data: 75

Output: 50 75 100
```

**Your Task:**
```
The task is to complete the function sortedInsert() which should insert the element in sorted
Linked List and return the head of the linked list
```

**Expected Time Complexity:** ```O(N)```<br>
**Expected Auxiliary Space:** ```O(1)```     

**Constraints:**
<li><code>1 <= N <= 10<sup>4</sup></code></li>
<li><code> -99999 <= A[i] <= 99999, for each valid i </code></li>