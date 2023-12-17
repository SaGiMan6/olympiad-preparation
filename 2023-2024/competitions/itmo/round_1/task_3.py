d = [0 for _ in range(5095)]
w = [False for _ in range(5095)]

def count(s, v):
    if w[v]:
        return d[v]
    else:
        w[v] = True
        d[v]
        return count(s + 1 , v)
