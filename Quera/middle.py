n = int(input())
a = sorted([int(x) for x in input().split()])
M = a[(n-1)//2]
ans = 0
for i in range(n):
    ans += abs(a[i] - M)
print(M, ans)