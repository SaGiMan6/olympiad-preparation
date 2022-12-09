a = int(input())

if a > 0:
    if a == 1:
        print(1)
    elif a == 2:
        print(3)
    elif a % 2 == 0:
        print((a + 1) * (a // 2))
    elif a % 2 == 1:
        print(((a + 1) * (a // 2)) + ((a + 1) // 2))
elif a < 0:
    if a == -1:
        print(0)
    elif a == -2:
        print(-2)
    elif a % 2 == 0:
        print(-1 * (((abs(a) + 1) * (abs(a) // 2)) - 1))
    elif a % 2 == 1:
        print(-1 * ((((abs(a) + 1) * (abs(a) // 2)) + ((abs(a) + 1) // 2)) - 1))
else:
    print(1)