n = int(input())

a = [0 for i in range(n + 1)]

mx = -4000000000
mn = 4000000000

imn = 1
imx = 1

for i in range(1, n + 1):
    a[i] = int(input()) + a[i - 1]
    if a[i] <= mn:
        mn = a[i]
        imn = i + 1
    if a[i] > mx and i >= imn:
        mx = a[i]
        imx = i

if n == 1:
    print(1)
    print(1)
else:
    print(imn)
    print(imx)
