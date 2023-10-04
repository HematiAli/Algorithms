"""
    bead sort
            [4, 5, 1, 3, 2] => [1, 2, 3, 4, 5]
"""
def bead_sort(sequence):
    if any(not isinstance(x, int) or x < 0 for x in sequence):
        raise TypeError('sequense must be list of non-negative integers')
    
    for _ in range(len(sequence)):
        for i, (rod_upper, rod_lower) in enumerate(zip(sequence, sequence[1:])):
            if rod_upper > rod_lower:
                sequence[i] -= rod_upper - rod_lower
                sequence[i + 1] += rod_upper - rod_lower

    return sequence

print(bead_sort( [4, 5, 1, 3, 2])) 