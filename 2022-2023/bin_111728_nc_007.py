n, m = map(int, input().split())

a = [int(x) for x in input().split()]
b = [int(x) for x in input().split()]


for i in range(m):
    l, r = 0, n - 1

    while (l + 1) != r:
        m = (r + l) // 2
        if b[i] > a[m]:
            l = m
        else:
            r = m

    if a[l] != b[i] and a[r] != b[i]:
        print(0)

    else:
        if a[l] == b[i]:
            while a[l] == b[i] and l > 0:
                l -= 1
            if l > 0:
                l += 1
        else:
            while a[l] != b[i]:
                l += 1

        if a[r] == b[i]:
            while a[r] == b[i] and r < (n - 1):
                r += 1
            if r < (n - 1):
                r -= 1
        else:
            while a[r] != b[i]:
                r -= 1

        print(f"{l + 1} {r + 1}")
