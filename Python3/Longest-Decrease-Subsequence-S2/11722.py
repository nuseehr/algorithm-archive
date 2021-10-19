import sys

N = int(sys.stdin.readline())
Arr = list(map(int, sys.stdin.readline().split()))

# 1로 초기화하는 이유는 감소하는 수열의 길이의 최소는 1이기 떄문
# Dp 배열은 i번째 까지 감소하는 수열의 길이를 저장한다.
Dp = [1 for _ in range(N)]

# 수열의 크기는 1000으로 이중 for문이어도 시간초과가 나지 않는다.
for i in range(N):
    for j in range(i):
        if Arr[j] > Arr[i]:
            Dp[i] = max(Dp[i], Dp[j]+1)

print(max(Dp))
