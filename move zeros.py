"""
     Move Zeros
            [False, 1, 3 ,5, 0, 1, 0, 'a'] => [False, 1, 3, 5, 1, 'a', 0, 0]
"""
def move_zeros(seq):
    result = []
    zeros = 0
    for i in seq:
        if i == 0 and type(i) != bool:
            zeros += 1
        else:
            result.append(i)

    result.extend([0] * zeros)
    return result
        
print(move_zeros([False, 1, 3 ,5, 0, 1, 0, 'a'] ))