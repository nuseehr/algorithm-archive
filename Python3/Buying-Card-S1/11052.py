
import sys

N = int(sys.stdin.readline())
Arr = [0] + list(map(int, sys.stdin.readline().split()))
Dp = [0 for _ in range(N+1)]

for i in range(1, N+1):
    for j in range(1, i+1):
        Dp[i] = max(Dp[i], Dp[i-j] + Arr[j])

print(Dp[N])


