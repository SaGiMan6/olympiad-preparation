n, r = map(int, input().split())

a = [int(x) for x in input().split(" ")]


v = 0
y = n - 1
x = y - 1


while y >= 1:
    if a[y] - a[x] > r:
        v += x + 1
        y -= 1
        x = y - 1
    elif x == 0:
        y -= 1
        x = y - 1
    else:
        x -= 1


print(v)
