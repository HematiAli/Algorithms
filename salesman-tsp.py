
from itertools import permutations #baraye jaygasht ha

def tsp(graph, s):
    vertex = []
    for i in range(len(graph)):
        if i != s:
            vertex.append(i)
    min_apth = 1e6
    for tuple1 in permutations(vertex):
        k = s
        sum_path = 0
        for j in tuple1:
            sum_path += graph[k][j]
            k = j
        sum_path += graph[k][s]

        min_apth = min(min_apth, sum_path)
    return min_apth



graph = [
           [0,10,15,20],
           [10,0,35,25],
           [15,35,0,30],
           [20,25,30,0]
        ]

s = 0
print(tsp(graph, s))