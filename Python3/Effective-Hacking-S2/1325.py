import sys

# 다시 풀기 !!!!
def DFS(Node, Cnt):
    Seen[Node] = 1
    print(Node, "Cnt", Cnt)

    for i in range(1, N+1):
        if Seen[i] == 0 and Graph[Node][i] == 1:
            print("FIND =", Node, i, Cnt)
            DFS(i, Cnt+1)
            print("END", Cnt)
            
N, M = map(int, sys.stdin.readline().split())

# 1번 노드부터 시작.
Graph = [[0]*(N+1) for _ in range(N+1)]

for i in range(M):
    a, b = map(int, input().split())
    Graph[b][a] = 1


Seen = [0] * (N+1)
Cnt = 1

DFS(1, Cnt)
print()
