n, x, y = map(int, input().split())


if x < y:
    t = x
else:
    t = y

l, r = 0, 10 ** 18


while l + 1 != r:
    m = (r + l) // 2

    if (m // x) + (m // y) < n - 1:
        l = m
    else:
        r = m


if (l // x) + (l // y) >= n - 1:
    print(l + t)
else:
    print(r + t)
