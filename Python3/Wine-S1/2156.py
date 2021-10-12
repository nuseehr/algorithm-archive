import sys
N = int(sys.stdin.readline())
Wines = [0]
Dp = [0 for _ in range(N+1)]

for i in range(N):
    W = int(sys.stdin.readline())
    Wines.append(W)
    
if N == 1:
    print(Wines[1])
elif N == 2:
    print(Wines[1] + Wines[2])
else:
    Dp[1] = Wines[1]
    Dp[2] = Wines[1] + Wines[2]
    for i in range(3, N+1):
        Dp[i] = max(Dp[i-3] + Wines[i] + Wines[i-1], Dp[i-2] + Wines[i])
        Dp[i] = max(Dp[i-1], Dp[i])

    print(Dp[N])
