k = int(input())


for i in range(k):
    n, w = map(int, input().split())

    a = [0 for j in range(n)]

    for j in range(n):
        a[j] = list(map(int, input().split()))

    b = [0 for j in range(w)]

    for j in range(w)   