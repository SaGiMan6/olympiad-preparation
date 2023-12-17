a = [1]
sm = 1
n = (10 ** 7) - 98

while len(a) < n:
    new = sm % 13

    a.append(new)
    sm += new


print(a[-200])
print(a[-99997])
