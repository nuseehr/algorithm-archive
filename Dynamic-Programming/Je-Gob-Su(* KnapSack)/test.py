'''
n = int(input())
dp = [0 for _ in range(n+1)]

dp[1] = 1
dp[2] = 2
dp[3] = 3

for i in range(4, n+1):
    for j in range(1, n+1):
        if j*j > n or j*j > i:
            break
        dp[i] = min(dp[i-1], dp[i - j*j]) + 1

print(dp[n])
'''
n = int(input())
dp = [0 for _ in range(n+1)]

for i in range(1, n+1):
    dp[i] = i
    j = 1
    while j*j <= i:
        if dp[i] > dp[i-j*j]+1:
            dp[i] = dp[i-j*j]+1
        j += 1
print(dp[n])
