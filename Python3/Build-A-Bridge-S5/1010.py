import sys
TestCases = int(sys.stdin.readline())


def my_factorial(n):
    if(n > 1):
        return n * my_factorial(n - 1)
    else:
        return 1


while TestCases:
    # mCn = mPn / n!
    # mPn = m! / (m-n)!
    N, M = map(int, sys.stdin.readline().split())
    NumberOfCases = my_factorial(
        M) // (my_factorial(M-N) * my_factorial(N))

    print(NumberOfCases)
    TestCases -= 1

'''
Dp = [0] * 31
Dp[0] = 1
Dp[1] = 1
 
for i in range(2, 31):
  Dp[i] = Dp[i-1] * i
 
TestCases = int(input())
for i in range(T):
  N, M = map(int, input().split())
  A = Dp[M-N]
  B = Dp[M]
  C = Dp[N]
 
  print((B//A)//C)
'''
