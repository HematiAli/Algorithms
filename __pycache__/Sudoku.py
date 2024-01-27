#In the name of God

sudoku=[]
# A Utility Function to print the Grid 
def print_grid(arr): 
    for i in range(9): 
        for j in range(9): 
            print(arr[i][j],end=" ") 
        print() 

#if there is empty place in sudoku fill empty and return True otherwise False
def findEmpty(arr,empty): 
    for row in range(9): 
        for col in range(9): 
            if(arr[row][col]==0): 
                empty[0]=row 
                empty[1]=col 
                return True
    return False

#Return True if 'num' used in 'r'th row otherwise False
def used_in_row(arr,r,num): 
    for i in range(9): 
        if arr[r][i] == num:
            return True
    return False

#Return True if 'num' used in 'c'th column otherwise False
def used_in_col(arr,c,num): 
    for i in range(9): 
        if arr[i][c] == num:
            return True
    return False
  
#Return True if 'num' used in the related box otherwise False
def used_in_box(arr,row,col,num): 
    for i in range(3): 
        for j in range(3): 
            if arr[i+row][j+col] == num: 
                return True
    return False
  
#Return True if we can put 'num' in this place otherwise False
def isSafe(arr,row,col,num): 
    return(
        not used_in_row(arr,row,num) and not used_in_col(arr,col,num) and
        not used_in_box(arr,row - row%3,col - col%3,num)
        ) 

#function that try to solve the input sudoku
def solve_sudoku(arr): 
      
    # 'empty' is a list variable that keeps the record of row and col in findEmpty Function     
    empty=[0,0] 
      
    # If there is no Empty place, we are done     
    if(not findEmpty(arr,empty)): 
        return True
      
    # Assigning list values to row and col that we got from 'findEmpty' Function  
    row=empty[0] 
    col=empty[1] 
      
    # consider digits 1 to 9 
    for num in range(1,10): 
        if(isSafe(arr,row,col,num)): 
            arr[row][col]=num 
            # return True, if sucess!
            if(solve_sudoku(arr)): 
                return True 
            arr[row][col] = 0 #Backtrack Part (Undo and try again)
              
    #if there is no solution        
    return False 
  
grid=[]  
for i in range(9):
    row=map(int,input().split())
    grid.append(list(row))
print('================================================')
#if sucess print the grid 
if(solve_sudoku(grid)): 
    print_grid(grid) 
else: 
    print("No solution exists")