def max_activities(acitvities, n):
    acitvities.sort(key=lambda x : x[1])
    
    sel = []
    i = 0
    sel.append(acitvities[i])
    for j in range(1,n):
        if acitvities[j][0] >= acitvities[i][1]:
            sel.append(acitvities[j])
            i = j
    return sel





activities = [[1,6], [3,5], [5,9], [2,3], [6,12], [4,6]]
n = len(activities)
print(max_activities(activities, n))