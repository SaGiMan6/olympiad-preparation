n = int(input())

a = [0 for i in range(n)]

for i in range(n):
    a[i] = int(input())


if n==1:
    print(1, 1)

elif n > 0:
    im = 0
    ib = 0
    jb = 1

    for i in range(1, n):
        if a[i - 1] < a[im]:
            im = i - 1
        if a[jb] - a[ib] < a[i] - a[im]:
            ib = im
            jb = i

    print(ib + 2)
    print(jb + 1)
