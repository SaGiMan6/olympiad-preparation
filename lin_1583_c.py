n, k, m = map(int, input().split())
a = [int(x) for x in input().split()]
s = 0
ind = 0

for i in range(n):
    s += a[i]
    if i > k:
        s -= a[i - k - 1]
    if s == m and i >= k:
        ind = i - k + 1
        break

print(ind)
