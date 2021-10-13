import sys

N, K = map(int, sys.stdin.readline().split())
Coins = [0 for _ in range(N)]
Dp = [0 for _ in range(K+1)]

for i in range(N):
    Coins[i] = int(sys.stdin.readline())

Dp[0] = 1

for i in Coins:
    for j in range(i, K+1):
        Dp[j] += Dp[j-i]

print(Dp[K])
