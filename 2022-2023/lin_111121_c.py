n, x = map(int, input().split())

a = input().split()
b = input().split()


mxs = x
mxp = 0
mxpi = -1
d1 = -1
d2 = -1


for i in range(n - 2, -1, -1):
    if int(b[i + 1]) > mxp:
        mxp = int(b[i + 1])
        mxpi = i + 2

    if ((x // int(a[i])) * mxp) > mxs:
        mxs = ((x // int(a[i])) * mxp) + (x % int(a[i]))
        d1 = i + 1
        d2 = mxpi


print(mxs)
print(d1, d2)
