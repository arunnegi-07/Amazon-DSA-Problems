## Intuition :
**Time Complexity : O(N)  and Space Complexity : O(1)**<br><br>
**Read this till end you definitely going to get the intuition of the Best Approach.**

#### Let us see an examples to build the intuition of the Best Approach:<br>

**Example :**
     
     we have to rotate array arr[] left 'd' times, 
     arr[] = {1, 2, 3, 4, 5}
     d = 2

     Now, if we see then after making '2' left rotations array will be as :

                                 3  4  5  1  2
    
    Let's make some observations using 'given array' and 'final array' :

               Given Array :     | 1  2 | 3  4  5 |

               1. Rotate first 'd' part and remaining 'N-d' part separately, then
                          
                        reversing first 'd' part using : reverse(arr,arr+d)

                                 | 2  1 | 3  4  5 |

                        reversing remaining 'n-d' part using : reverse(arr+d,arr+n)    

                                 | 2  1 | 5  4  3 |     
                                        
                2. Now, Reverse whole Array at once using : reverse(arr,arr+n), then we get
   
                                 | 3  4  5  1   2 |
                
                And this is our Final Array.
           

            So we Just have to Reverse first 'd' part (d is number of times we have to rotate the array) and remaining part separately.
            then, Just reverse the Whole array at once.

        
**Note:** 
if same procedure we want to apply to rotate right by 'd', then
1. Reverse last 'd' elements and first 'N-d' separately.
2. Then Just reverse the whole Array.

                 (OR)
                 
1. First Reverse the whole Array.
2. Reverse first 'd' elements and last 'N-d' elements separately (as we have done in case of Rotate left).   
