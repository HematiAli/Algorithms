n, q = map(int, input().split())
a = list(map(int, input().split()))
"""
this algorithm is O(n)
"""
M = max(a)
cnt = [0 for i in range(M + 1)]
for i in range(n):
    cnt[a[i]] += 1
ps = [0 for i in range(M)]

for i in range(1, M):
    ps[i] = ps[i - 1] + cnt[i]

for i in range(q):
    x = int(input())

    if x > M:
        print(n)

    else:
        print(ps[x - 1])

# -----------------------------------------
"""
this algorithm is O(n^2)
"""
for i in range(q):
    x = int(input())
    answer = 0
    for j in a:
        if x > j:
            answer += 1
    print(answer)
