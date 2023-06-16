## Intuition :
**Time Complexity : O(N)  and Space Complexity : O(1)**<br><br>

**This is Intuition behind Moore's Algorithm**

**Here's how the algorithm works:**

    Initialization: 
    Set a candidate variable candidate to store the current candidate for the majority element 
    and initialize it to any value. Set a count variable count to keep track of the count of the current candidate
    and initialize it to 0.

    Majority Element Candidate Identification: Iterate through the array. For each element:

    If the count is 0, set the current element as the candidate and increment the count to 1.
    If the current element is the same as the candidate, increment the count by 1.
    If the current element is different from the candidate, decrement the count by 1.
    This step essentially eliminates pairs of elements, where one element is a potential candidate for the majority
    element and the other is not.

    Majority Element Verification: 
    After the first phase, the candidate will hold the potential majority element. To verify if it's indeed the majority element, iterate through the array again and count the occurrences of the candidate element. If the count is greater than n/2, where n is the length of the array, then the candidate is the majority element.

    Return the majority element if it exists; otherwise, indicate that there is no majority element.

    The Moore's Majority Voting Algorithm is effective because the majority element, by definition, appears more than n/2 times. So even if other elements are competing for the majority, the majority element will eventually prevail during the voting process.


    Suppose we have an array: 
    [2, 4, 5, 2, 2, 2, 6, 2, 9]. Our goal is to find the majority element, i.e., the element that appears more than n/2 times, where n is the length of the array.

    Step 1: Initialization

    Set candidate to any value (let's choose the first element): candidate = 2
    Set count to 0: count = 0
    Step 2: Majority Element Candidate Identification

    Iterate through the array:
    For the first element (2):

    Since count is 0, set candidate = 2 and increment count to 1.
    For the second element (4):

    Since 4 is not equal to the candidate (2), decrement count to 0.
    For the third element (5):

    Since count is 0, set candidate = 5 and increment count to 1.
    For the fourth element (2):

    Since 2 is not equal to the candidate (5), decrement count to 0.
    For the fifth element (2):

    Since 2 is equal to the candidate (5), increment count to 1.
    For the sixth element (2):

    Since 2 is equal to the candidate (5), increment count to 2.
    For the seventh element (6):

    Since 6 is not equal to the candidate (2), decrement count to 1.
    For the eighth element (2):

    Since 2 is equal to the candidate (2), increment count to 2.
    For the ninth element (9):

    Since 9 is not equal to the candidate (2), decrement count to 1.
    Step 3: Majority Element Verification

    Iterate through the array again to count the occurrences of the candidate (2):

    The candidate (2) appears 5 times in the array.
    Check if the count (5) is greater than n/2 (9/2 = 4.5, rounded to 5):

    Since the count is indeed greater than n/2, we can conclude that the majority element is 2.
    Step 4: Return the Result

    The majority element in the given array is 2.
    In this example, Moore's Majority Voting Algorithm correctly identified 2 as the majority element in the array [2, 4, 5, 2, 2, 2, 6, 2, 9].
            
