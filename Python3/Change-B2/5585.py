import sys
Prce = int(sys.stdin.readline())
Coin = [500, 100, 50, 10, 5, 1]
Change = 1000 - Prce
Cnt = 0

for i in range(6):
    Cnt += Change // Coin[i]
    Change = Change % Coin[i]
print(Cnt)

