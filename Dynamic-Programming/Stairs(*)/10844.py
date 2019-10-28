# 쉬운 계단수 풀이 1. C++스러운 풀이.
n = int(input())
dp = [[0 for _ in range(10)] for _ in range(101)]

for j in range(1, 10):
    dp[1][j] = 1

for i in range(2, n+1):
    for j in range(10):
        if j == 0:
            dp[i][j] = dp[i-1][j+1]
        elif j > 0 and j < 9:
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1]
        else:
            dp[i][j] = dp[i-1][j-1]


print(sum(dp[n][0:10]) % 1000000000)

# 쉬운 계단수 풀이 1. Python스러운 풀이.
n = int(input())
cur = [0, 1, 1, 1, 1, 1, 1, 1, 1, 1]

while n > 1:
    next = [
    cur[1],
    cur[0] + cur[2],
    cur[1] + cur[3],
    cur[2] + cur[4],
    cur[3] + cur[5],
    cur[4] + cur[6],
    cur[5] + cur[7],
    cur[6] + cur[8],
    cur[7] + cur[9],
    cur[8]
    ]
    cur = next
    n -= 1

print(sum(cur) % 1000000000)
