k = 0
ans_1 = 0
ans_2 = 0

for i in range(1, 10 ** 20):
    if len(str(i)) * 3 == len(bin(i)) - 2:
        k += 1
        if k == (10 ** 8) - 400:
            print(k, i, "answer_1")
            ans_1 = i
        elif k == (10 ** 8) - 286:
            print(k, i, "answer_2")
            ans_2 = i
            break
        else:
            print(k, i)

print(ans_1)
print(ans_2)
