n, r = map(int, input().split())

a = [int(x) for x in input().split(" ")]


v = 0
x = 0
x1 = x
y = n - 1


while x < y:
    if a[y] - a[x] > r:
        v += 1
        x += 1
    else:
        x = 0
        y = y - 1


print(v)
