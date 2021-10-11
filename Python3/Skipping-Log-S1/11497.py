import sys

TestCase = int(sys.stdin.readline())

while TestCase:
    N = int(sys.stdin.readline())
    Heights = list(map(int, sys.stdin.readline().split()))
    Heights.sort(reverse=True)
    
    Logs = []
    Mx = 0
    
    for i in range(N):
        if i % 2 == 1:
            Logs.append(Heights[i])
        else:
            Logs.insert(0, Heights[i])
            
    for i in range(1, N):
        if Mx < abs(Logs[i] - Logs[i-1]):
            Mx = abs(Logs[i] - Logs[i-1])
            
    print(Mx)

    TestCase -= 1
