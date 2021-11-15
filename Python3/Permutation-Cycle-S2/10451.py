import sys
sys.setrecursionlimit(2000)

def DFS(v):
    Seen[v] = 1
    idx = Arr[v]
    if Seen[idx] == 0:
        DFS(idx)
    

TestCases = int(sys.stdin.readline())

while TestCases:
    N = int(sys.stdin.readline())
    Graph = [[0]*(N+1) for _ in range(N+1)]
    Seen = [0] * (N+1)
    Arr = [0] + list(map(int, sys.stdin.readline().split()))
    Cycle = 0
    
    for i in range(1, N+1):
        Graph[i][Arr[i]] = 1
    
    for i in range(1, N+1):
        if Seen[i] == 0:
            Cycle += 1
            DFS(i)
            
    TestCases -= 1
    print(Cycle)
    
