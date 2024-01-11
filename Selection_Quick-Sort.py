"""
        Sort the array from smallest to largest
            O(n^2)
"""

def findsmallest(arr):
    smallest = arr[0]
    smallest_index = 0
    for i in range(1, len(arr)):
        if arr[i] < smallest:
            smallest = arr[i]
            smallest_index = i
    return smallest_index

def selectionsort(arr):
    new_arr = []
    for i in range(len(arr)):
        smallest_index = findsmallest(arr=arr)
        new_arr.append(arr.pop(smallest_index))
    return new_arr

print(selectionsort([5, 3, 6, 2, 10]))

#==================================================================
"""
    quicksort
        O(nlogn)
"""
def quicksort(arr):
    if len(arr) < 2:
        return arr
    else:
        pivot = arr[0]
        less = [i for i in arr[1:] if i <= pivot]
        greate = [i for i in arr[1:] if i >= pivot]
        return quicksort(less) + [pivot] + quicksort(greate)
    
print(quicksort([5, 3, 6, 2, 10]))
dict()