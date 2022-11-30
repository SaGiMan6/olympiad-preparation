n, x, y = map(int, input().split())

t = 0

if x < y:
    t = x
else:
    t = y


l = 0
r = 10 ** 18

while l + 1 != r:
    m = (r + l) // 2

    if (m // x) + (m // y) >= n - 2:
        r = m
    else:
        l = m

print(r + t + 2)
