def half_sum(x, y):
    if (not x) and (not y):
        return 0, 0
    elif (not x) or (not y):
        return 1, 0
    else:
        return 0, 1


for x1 in range(2):
    for x2 in range(2):
        for x3 in range(2):
            for x4 in range(2):
                s1, c1 = half_sum(x1, not x2)
                s2, c2 = half_sum(x2, not x3)
                s3, c3 = half_sum(x3, not x4)
                s4, c4 = half_sum(x4, not x1)

                # (s1 or c2) or (s2 and c3) or (s3 or c4) or (s4 and c1)
                print(x1, x2, x3, x4, (s1 or c2) or (s2 and c3) or (s3 or c4) or (s4 and c1))
