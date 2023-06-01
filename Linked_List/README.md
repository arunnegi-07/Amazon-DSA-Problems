# Problem : Finding Middle Element in a Linked List (Easy)
Given a singly linked list of **N** nodes.<br>
The task is to find the middle of the linked list.<br><br>

For example, if the linked list is<br>
1-> 2->3->4->5, then the middle node of the list is 3.<br>
If there are two middle nodes(in case, when N is even), print the second middle element.
For example, if the linked list given is 1->2->3->4->5->6, then the middle node of the list is 4.

**Example 1:**
```
Input:
LinkedList: 1->2->3->4->5

Output: 3 

Explanation: 
Middle of linked list is 3.
```

**Example 2:** 
```
Input:
LinkedList: 2->4->6->7->5->1

Output: 7 

Explanation: 
Middle of linked list is 7.
```

**Your Task:**
```
The task is to complete the function getMiddle() which takes a head reference as the only argument
and should return the data at the middle node of the linked list.
```

**Expected Time Complexity:** ```O(N)```<br>
**Expected Auxiliary Space:** ```O(1)```

**Constraints:**
<li><code>1 <= N <= 5000</code></li>