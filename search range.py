"""
    search range
                [6, 7, 7, 8, 8, 8, 10], 8 => [3, 5]
"""
def search_range(nums, target):
    low = 0
    high = len(nums) - 1
    while low <= high :
        mid = low + (high - low) // 2
        if nums[mid] > target:
            high = mid - 1
        elif nums[mid] < target:
            low = mid + 1
        else:
            break
    for j in range(len(nums)-1, -1, -1):
        if nums[j] == target:
                return [mid, j]
    
    return [None, None]



