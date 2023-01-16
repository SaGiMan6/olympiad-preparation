n = int(input())
a = input().split(" ")
im = 0
ib, jb = 0, 1


for i in range(1, n):
    if int(a[i - 1]) < int(a[im]):
        im = i - 1
    if int(a[jb]) / int(a[ib]) < int(a[i]) / int(a[im]):
        jb, ib = i, im

if int(a[jb]) / int(a[ib]) == 1:
    print("0 0")
else:
    print(f"{ib + 1} {jb + 1}")