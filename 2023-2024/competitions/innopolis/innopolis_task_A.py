a, b = map(int, input().strip().split())
x, y = map(int, input().strip().split())

if (x * a > y * b):
    n_1 = int((x * a - y * b) / (2 * x))
    n_2 = n_1 + 1
    if (n_1 > 0):
        n_3 = n_1 - 1
    else:
        n_3 = n_1

    delta_1 = int(abs(x * (a - 2 * n_1) - y * b))
    delta_2 = int(abs(x * (a - 2 * n_2) - y * b))
    delta_3 = int(abs(x * (a - 2 * n_3) - y * b))
    if a - n_2 > 0:
        if delta_3 <= delta_1:
            if delta_3 <= delta_2:
                print(a - n_3)
            else:
                print(a - n_2)

        else:
            if delta_1 <= delta_2:
                print(a - n_1)
            else:
                print(a - n_2)
    else:
        if a - n_1 > 0:
            if delta_3 <= delta_1:
                print(a - n_3)
            else:
                print(a - n_1)
        else:
            print(a - n_3)

else:
    n_1 = int((-x * a + y * b) / (2 * y))
    n_2 = n_1 + 1
    if n_1 > 0:
        n_3 = n_1 - 1
    else:
        n_3 = n_1
    delta_1 = int(abs(y * (2 * n_1 - b) + x * a))
    delta_2 = int(abs(y * (2 * n_2 - b) + x * a))
    delta_3 = int(abs(y * (2 * n_3 - b) + x * a))
    if n_2 <= b:
        if delta_3 <= delta_1:
            if delta_3 <= delta_2:
                print(a + n_3)
            else:
                print(a + n_2)

        else:
            if delta_1 <= delta_2:
                print(a + n_1)
            else:
                print(a + n_2)
    else:
        if n_1 <= b:
            if delta_1 <= delta_3:
                print(a + n_1)
            else:
                print(a + n_3)
        else:
            print(a + n_3)
