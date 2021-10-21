
import sys

def DFS(Node):
    Seen[Node] = 1

    for i in range(1, N+1):
        if Seen[i] == 0 and Graph[Node][i] == 1:
            DFS(i)
            Computers.append(i)
            
    return len(Computers)
    
N = int(sys.stdin.readline())
M = int(sys.stdin.readline())

# 1번 노드부터 시작.
Graph = [[0]*(N+1) for _ in range(N+1)]

for i in range(M):
    a, b = map(int, input().split())
    Graph[a][b] = Graph[b][a] = 1

Seen = [0] * (N+1)
Computers = []

print(DFS(1))
