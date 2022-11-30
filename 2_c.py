n, k = map(int, input().split())

a = [int(x) for x in input().split()]
b = [int(x) for x in input().split()]

for i in range(k):
    if b[i] <= a[0]:
        print(a[0])

    elif b[i] >= a[n - 1]:
        print(a[n - 1])

    else:
        l = 0
        r = n - 1
        # f(x) = (a[x] > b[i])
        while ((l + 1) != r):
            m = (r + l) // 2

            if a[m] > b[i]:
                r = m
            else:
                l = m

        if (a[r] - b[i]) >= (b[i] - a[l]):
            print(a[l])
        elif (a[r] - b[i]) < (b[i] - a[l]):
            print(a[r])