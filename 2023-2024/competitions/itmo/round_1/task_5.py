def imp(a, b):
    return (not a) or b


def ekv(a, b):
    return (not a and not b) or (a and b)


x = 1
y = 1
z = 0


print(bool(ekv(imp(y, x), z)))
print(bool(imp(ekv(x and (not y), y and z), (not x) and z)))
print(bool(imp(y and (not z), imp(x, not (y or z)))))
print(bool(imp(imp(not y, not z), ekv(y, z))))
print(bool(imp(ekv(z, y), imp(x, y))))
