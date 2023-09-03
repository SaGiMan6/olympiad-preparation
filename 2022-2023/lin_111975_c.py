d, t = map(int, input().split())

a = list(map(int, input().split()))


l, r = 0, 1
s = 0


while r != d and l != d - 1:
    if a[r] - a[l] <= t:
        r += 1
    else:
        l += 1
        s += d - r


print(s)
