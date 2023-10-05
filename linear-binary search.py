"""
    Linear(Sequential) Search
                        [1, 3, 6, 8 ,11, 23, 44], 8 => 3 
"""
def search_linear(array, element):
    for i in range(len(array)):
        if array[i] == element:
            return i
    return None

#===================================================================================
"""
    Binary Search
                [1, 3, 6, 8 ,11, 23, 44], 8 => 3
"""
def binary_search(array, element):
    low, high = 0, len(array) - 1 

    while low <= high:
        mid = (high + low) //2
        if array[mid] == element:
            return mid
        elif array[mid] > element:
              high = mid - 1 
        else:
            low = mid + 1
          
    return None



