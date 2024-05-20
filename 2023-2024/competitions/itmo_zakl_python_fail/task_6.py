# 2401C7A38B7E

a = """00:24:1E:6D:FC:7D
44:45:53:36:A0:88
78:84:3C:94:06:A3
00:22:4C:FA:BE:C9
44:45:53:DC:E6:7A
68:76:4F:9A:99:FF
E0:0C:7F:53:C5:09
44:45:53:7C:70:65
BC:6E:64:3C:AD:EF
A4:5C:27:35:CE:7C
44:45:53:75:DA:1F
9C:5C:F9:74:17:50
00:09:BF:10:AD:FD
44:45:53:74:2A:F4
00:EB:2D:38:D0:F2
00:27:09:00:AC:1B
44:45:53:DC:53:CE
68:76:4F:18:EC:5C
64:B5:C6:58:97:DB
44:45:53:60:96:FE
00:1E:45:9C:9C:FF
E8:DA:20:CF:BB:CB
44:45:53:18:37:68
4C:21:D0:35:31:22
00:1F:C5:A3:8B:43
44:45:53:0B:25:65
00:21:9E:91:53:6B
00:26:59:B4:AE:9A
44:45:53:76:95:14
30:17:C8:8A:84:15"""

p_result = []
result = []

a = a.replace(":", "").split("\n")

print(a)

for i in a:
    print("1: 2401C7A38B7E")
    print(f"2: {i}")
    p_result.append(input("Result: "))

for i in range(len(p_result)):
    result.append(int(p_result[i]) % 4)
