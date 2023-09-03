n = int(input())
a = input().split()

q = int(input())
x = [0 for i in range(q)]

for i in range(q):
    x[i] = int(input())


s = []
i = 0
vstc = 0

while i < n:
    if int(a[i]) == 0 and vstc == 0:
        i += 1
    elif int(a[i]) == 0 and vstc == 1:
        i = 0
        vstc = 0
    elif int(a[i]) > 0:
        s.append(str(i + 1))
        a[i] = str(int(a[i]) - 1)
        if i == n - 1:
            vstc = 0
            i = 0
        else:
            vstc = 1
            i += 1


for i in range(q):
    nt = x[i]
    print(s[nt - 1])
