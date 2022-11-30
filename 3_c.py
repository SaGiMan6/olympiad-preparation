n = int(input())

s = 0

while 2 ** s < n:
    s += 1

print(s)
