n = int(input())


if n == 1 or n == 2:
    print(1)
elif n == 3:
    print(2)
elif 0 < n <= 45:
    f_1 = 1
    f_0 = 2
    for i in range(n - 3):
        f = f_0 + f_1
        f_1 = f_0
        f_0 = f

    print(f)