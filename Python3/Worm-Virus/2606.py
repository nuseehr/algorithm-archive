
import sys

def DFS(Node, Cnt):
    Seen[Node] = 1

    for i in range(1, N+1):
        if Seen[i] == 0 and Graph[Node][i] == 1:
            DFS(i, Cnt+1)
    
    Computers.add(Node)
            
            
N = int(sys.stdin.readline())
M = int(sys.stdin.readline())

# 1번 노드부터 시작.
Graph = [[0]*(N+1) for _ in range(N+1)]

for i in range(M):
    a, b = map(int, input().split())
    Graph[a][b] = Graph[b][a] = 1

Seen = [0] * (N+1)
Cnt = 1
Computers = set()

DFS(1, Cnt)
Computers.remove(1)
print(len(Computers))
