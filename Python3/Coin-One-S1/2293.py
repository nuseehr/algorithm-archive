import sys

# N 동전 종류, K 만들고자 하는 금액
N, K = map(int, sys.stdin.readline().split())
Coins = [0 for _ in range(N)]
Dp = [0 for _ in range(K+1)]

for i in range(N):
    Coins[i] = int(sys.stdin.readline())

# 0원으로 만드는 경우의 수는 1이다.
Dp[0] = 1

# Dp[i]는 i원을 만드는 경우의 수.
for i in Coins:
    for j in range(i, K+1):
        Dp[j] += Dp[j-i]

print(Dp[K])
