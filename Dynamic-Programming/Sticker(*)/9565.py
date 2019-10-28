t = int(input())

while t:
    st = int(input())
    arr = []
    dp = [[0 for _ in range(st+1)] for _ in range(2)]
    arr = [[0] + list(map(int, input().split())) for _ in range(2)]

    dp[0][1] = arr[0][1]
    dp[1][1] = arr[1][1]

    for j in range(2, st+1):
        dp[0][j] = max(dp[1][j-1], dp[1][j-2]) + arr[0][j]
        dp[1][j] = max(dp[0][j-1], dp[0][j-2]) + arr[1][j]

    print(max(dp[0][st], dp[1][st]))
    t -= 1
