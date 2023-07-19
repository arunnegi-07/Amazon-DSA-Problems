## Intuition

**Few things to keep in mind :**
1. Only thing we are going to do is calculating the quantity of water each **index** going to store, Note that
    point we are just calculate for each index, we are not thinking about all at once, and this going to make sense
    once we take an example to understand it.
2. For 1st and the last tower we will not calculate the quantity  of trapped water on them because as they are on the
    extreme ends there is no sense that they will hold the water on them (keep in mind we are talking of in top of it).
      
Before going to proper example let's take small example to clear some points:
Let's say we have,  arr = {2, 0 ,6}
<img src="https://i.ibb.co/Fzyh1Xh/1689747850901.jpg" alt="1689747850901" border="0">


```
For, index = 0 i.e arr[0] = 2
    As we talked we will not consider start and end index as water on top of it will fall out if
    we think logically, so there is no sense calculating for those indices.

For, index = 1 i.e arr[1] = 0
    If we see how much water this block of '0' is going to trap on top of it, then we have to take in
    consideration the longest blocks or tower on left and right side of it.
    Also it is clear the water is trapped to the level of block with height '2' because after that water will
    fall out.

    If we see the red circles on the diagram above then those are the blocks on which water is trapped on
    the top of the block '0'.
    So, it is nothing but equal to the value of block '2' subtracting the actual height of the current block i.e
    for now '0'
    therefore, water trappped = min(2, 6) - 0 = 2 - 0 = 2 (and it is clear from the diagram also)

    i.e minimum of longest block on left and longest block on right
         = min(leftMax, rightMax) - height of current block
      
        and, this is the only thing we are going to calculate for each index and keep on adding it.
```

**Note :** While calculating leftMax and rightMax, the point for which we are calculating is also included means if it
it maximum among all then we will consider it, you will understand it in below example when we go for **index = 3**.

**Now, let us take a bigger example :**
Consider below example:
<img src="https://i.ibb.co/YWYwtf8/1689747850895.jpg" alt="1689747850895" border="0">

```
Let's take arr = {3, 0, 0, 5, 0, 4, 0, 0, 3}

For, index = 1:
    value is '0', and maximum on left = 3 , on right = 5
    so water trapped = min(3, 5)  - 0 = 3 - 0 = 3

For, index = 2:
    value is '0', and maximum on left = 3 , on right = 5
    so water trapped = min(3, 5)  - 0 = 3 - 0 = 3

For, index = 3:
    value is '5', and maximum on left = 5 , on right = 5  --> Here from both sides '5' is max
    so water trapped = min(5, 5)  - 5 = 5 - 5 = 0

For, index = 4:
    value is '0', and maximum on left = 5 , on right = 4
    so water trapped = min(5, 4)  - 0 = 4 - 0 = 4

For, index = 5:
    value is '4', and maximum on left = 5 , on right = 4
    so water trapped = min(5, 4)  - 4 = 4 - 4 = 0

For, index = 6:
    value is '0', and maximum on left = 5 , on right = 3
    so water trapped = min(5, 3)  - 0 = 3 - 0 = 3

For, index = 7:
    value is '0', and maximum on left = 5 , on right = 3
    so water trapped = min(5, 3)  - 0 = 3 - 0 = 3   

    So, adding of them = 3 + 3 + 0 + 4 + 0 + 3 + 3  
                                    = 16 units
```

Now, take few examples by yourself to make it more clear.
 