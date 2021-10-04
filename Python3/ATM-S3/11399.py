
N = int(input())
P = sorted(list(map(int, input().split())))
SUM = 0
ANS = 0

for i in range(len(P)):
    SUM += P[i]
    ANS += SUM
    
print(ANS)

