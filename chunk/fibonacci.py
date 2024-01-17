# back-end compelete function Template for Python 3
"""
    Dynamic Programming
"""
class Solution:

    def printFibb(self, n):

        # creating a list to store the number
        res = []

        a=b=1
        
        if n >= 1:
            res.append(1)
        
        if n >= 2:
            res.append(1)
        
        for i in range(2, n):
            # pushing sum of a and b in the list.
            res.append(a+b)
            c = a + b

            # updating a as b and b as c
            a = b
            b = c
        
        return res

# ===========================================================================
"""
    Recursive Functions
"""
def Fibonacci(n):
    if n < 0:
        print('incorrect input')
    elif n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return Fibonacci(n-1) + Fibonacci(n-2)
    