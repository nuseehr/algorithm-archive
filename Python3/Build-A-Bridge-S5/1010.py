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
    NumberOfCases = int(my_factorial(
        M) / (my_factorial(M-N) * my_factorial(N)))

    print(NumberOfCases)
    TestCases -= 1
