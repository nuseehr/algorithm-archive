n = int(input())
hw = []
bulk = [n for _ in range(n)]

for _ in range(n):
    h, w = map(int, input().split())
    hw.append([h, w])

for i in range(n):
    for j in range(n):
        if i != j:
            if hw[i][0] < hw[j][0] and hw[i][1] < hw[j][1]:
                continue
            else:
                bulk[i] -= 1


print(" ".join(map(str, bulk)))
