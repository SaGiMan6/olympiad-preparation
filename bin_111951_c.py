n = int(input())
k = int(input())

l, r = 0, (n + 1) // 2


while l + 1 != r:
    m = (r + l) // 2

    if (k + m) * 3 < n + m:
        l = m
    else:
        r = m

if (k + l) * 3 >= n + l:
    print(l)
else:
    print(r)
