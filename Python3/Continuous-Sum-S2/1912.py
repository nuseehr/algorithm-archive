import sys

N = int(sys.stdin.readline())
Arr = list(map(int, sys.stdin.readline().split()))
Dp = [0 for _ in range(N)]
 
Dp[0] = Arr[0]

# Dp 배열은 i-1번째 까지 연속합, 배열의 값과 비교.
for i in range(1, N):
    Dp[i] = max(Dp[i-1] + Arr[i], Arr[i])
    print(Dp)

# 최대 값은 연속합중에 가장 큰 값으로 찾는다.
print(max(Dp))
    
        

