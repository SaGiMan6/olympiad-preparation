w, h, n = map(int, input().split())

l, r = 0, 10 ** 14

while l + 1 != r:
    m = (r + l) // 2

    if (m // w) * (m // h) < n:
        l = m
    else:
        r = m

if (l // w) * (l // h)  >= n:
    print(l)
else:
    print(r)
