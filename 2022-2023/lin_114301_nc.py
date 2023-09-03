n, k = map(int, input().split())

h = input().split()

mnp = k


for i in range(n - k + 1):
    psm = 0
    for j in range(k - 1):
        if int(h[j]) < int(h[j + 1]):
            psm += 1
            print(h[j], h[j + 1])
    if psm < mnp:
        mnp = psm


print(mnp)