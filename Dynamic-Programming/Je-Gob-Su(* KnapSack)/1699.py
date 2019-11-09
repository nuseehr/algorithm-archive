n = int(input())
dp = [0 for _ in range(n+1)]
print()

for i in range(1, n+1):
    dp[i] = i
    j = 1
    print(dp)
    while j*j <= i:
        if dp[i] > dp[i-j*j]+1:
            dp[i] = dp[i-j*j]+1
        j += 1

print()
print(dp[n])
