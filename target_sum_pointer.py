#Finding x,y from two arrays such that they meet target sum

#Algo:
'''Find the pointer to start of one and end of other.
Increment one if sum of pointed var is less and decrement other if sum is more.'''

#Note:Arrays should be sorted
#Complexity:Linear

import numpy as np

    
def find_target(target,ar1,ar2):
    l=len(ar1)
    p1=0
    p2=len(ar2)-1
    
    while(p2>-1 and p1<l):
        s=ar2[p2]+ar1[p1]
        if s>target:
            p2-=1
        elif s<target:
            p1+=1
        else:
            print("Found for {},{}".format(ar1[p1],ar2[p2]))
            return 
    print("Not found")
    
ar1=np.array([1,2,4,5,17,19,31])
ar2=np.array([4,5,5,6,13,12,42,56,67])
find_target(30,ar1,ar2)