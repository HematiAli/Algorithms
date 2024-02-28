n, k = map(int, input().split())
a = list(map(int, input().split()))
"""
O(n^2)
"""
val = 1000 * 1000 * 1000

for x in range(-100000, 100000):
    t = 0
    for i in range(n):
        t += abs((x + i * k) - a[i])
    val = min(val, t)
print(val)
# =========================================================

"""
O(n.log(n))
"""
sum = 0

for i in range(n):
    a[i] = a[i]-i*k
    sum = sum + a[i]

a.sort()

psum = 0
ans = -1

for i in range(n):
    temp = (a[i]*i - psum)
    psum = psum + a[i]
    temp = temp + (sum - psum - a[i]*(n - 1 - i))
    if ans == -1 or temp < ans:
        ans = temp

print(ans)