import sys
from collections import deque
'''
기존 Graph 배열같이 2차원 배열로 선언하면 메모리 초과가 난다.
Tree[a].append(b)
Tree[b].append(a)
로 트리를 만들어 주자.
'''
# Breadth First Search
def BFS(v):
    Queue = deque([v])
    Seen[v] = 1
    
    while Queue:
        v = Queue.popleft()
        #print(v, end=' ')
        for i in Tree[v]:
            #if Seen[i] == 0 and Graph[v][i] == 1:
            if Seen[i] == 0:
                Queue.append(i)
                Ans[i] = v
                Seen[i] = 1
    

N = int(sys.stdin.readline())
#Graph = [[0]*(N+1) for _ in range(N+1)]
Ans = [0] * (N+1)
Tree = [[] for _ in range(N+1)]

for i in range(N-1):
    a, b = map(int, sys.stdin.readline().split())
    #Graph[a][b] = Graph[b][a] = 1
    Tree[a].append(b)
    Tree[b].append(a)
    
Seen = [0] * (N+1)

BFS(1)
for i in range(2, N+1):
    print(Ans[i])
