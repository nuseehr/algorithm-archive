# 2579 계단 오르기 문제와 비슷한 문제

import sys
N = int(sys.stdin.readline())
Wines = [0]
Dp = [0 for _ in range(N+1)]

for i in range(N):
    W = int(sys.stdin.readline())
    Wines.append(W)
    
if N == 1:
    print(Wines[1])
else:
    Dp[1] = Wines[1]
    Dp[2] = Wines[1] + Wines[2]
    for i in range(3, N+1):
    
        '''
        Case 1. i번째 포도주를 마신다. 그리고 i-1번째 포도주를 마시고 i-2번째 포도주를 마시지 않는다.
        Case 2. i번째 포도주를 마신다. 그리고 i-2번째 포도주를 마시고 i-1번째 포도주를 마시지 않는다.
        Case 3. i번째 포도주를 마시지 않는다.
        '''
        
        Case1 = Wines[i] + Wines[i-1] + Dp[i-3]
        Case2 = Wines[i] + Dp[i-2]
        Case3 = Dp[i-1]
        
        # Dp[i]의 값은 i번째 와인까지의 마시는 와인의 최대값이다.
        Dp[i] = max(Case1, Case2, Case3)

    print(Dp[N])
    
