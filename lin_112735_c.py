str1 = input().split(" ")
a = input().split(" ")

n = int(str1[0])
k = int(str1[1])
im = 0
ib, jb = 0, (1 + k)

for i in range(k + 1, n):
    if int(a[im]) < int(a[i - k - 1]):
        im  = i - k - 1
    if int(a[i]) + int(a[im]) > int(a[ib]) + int(a[jb]):
        ib, jb = im, i

print(f"{ib + 1} {jb + 1}")