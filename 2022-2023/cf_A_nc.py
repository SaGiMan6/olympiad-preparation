s = input()
l = len(s)

if l > 9:
    rs = list(s[-9:])
else:
    rs = list(s)

rl = len(rs)


if rl < 3:
    print(0)
else:
    sch = 0

    for i in range(rl - 2):
        iu = 1
        ju = 1
        st = 0
        while st == 0 and iu < rl:
            ba = []
            bc = []
            bg = []
            bt = []

            for j in range(i, rl):
                if rs[j] == "A":
                    ba.append(j)
                elif rs[j] == "C":
                    bc.append(j)
                elif rs[j] == "G":
                    bg.append(j)
                elif rs[j] == "T":
                    bt.append(j)

            if len(ba) > 2 or len(bc) > 2 or len(bg) > 2 or len(bt) > 2:
                st = 1
            elif len(ba) > 1:
                if ba[-1] - 1 > ba[0]:
                    st = 1
            elif len(bc) > 1:
                if bc[-1] - 1 > bc[0]:
                    st = 1
            elif len(bg) > 1:
                if bg[-1] - 1 > bg[0]:
                    st = 1
            elif len(bt) > 1:
                if bt[-1] - 1 > bt[0]:
                    st = 1

            if st == 0:
                st = -1

        if st == 1:
            sch += 1

print(sch)