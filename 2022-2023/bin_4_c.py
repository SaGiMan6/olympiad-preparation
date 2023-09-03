n, k = map(int, input().split())

a = [int(x) for x in input().split()]
b = [int(x) for x in input().split()]


for i in range(k):
    if b[i] < a[0] or b[i] > a[n - 1]:
        print("NO")

    elif b[i] == a[0] or b[i] == a[n - 1]:
        print("YES")

    else:
        l = 0
        r = n - 1
        otv = 0

        while ((l + 1) != r):
            m = (r + l) // 2

            if a[m] > b[i]:
                r = m
            elif a[m] < b[i]:
                l = m
            else:
                otv = 1
                break

        if a[r] == b[i] or a[l] == b[i] or otv == 1:
            print("YES")
        else:
            print("NO")

