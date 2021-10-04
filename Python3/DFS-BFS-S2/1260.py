from collections import deque

# Depth First Search
def DFS(v):
    seen[v] = 1
    print(v, end=' ')
    for i in range(1, n+1):
        if seen[i] == 0 and graph[v][i] == 1:
            DFS(i)

# Breadth First Search
def BFS(v):
    queue = deque([v])
    seen[v] = 1
    
    while queue:
        v = queue.popleft()
        print(v, end=' ')
        for i in range(1, n+1):
            if seen[i] == 0 and graph[v][i] == 1:
                queue.append(i)
                seen[i] = 1
        
        

# n: 노드수, m: 간선수, v: 시작노드
n, m, v = map(int, input().split())
graph = [[0]*(n+1) for _ in range(n+1)]

for i in range(m):
    a, b = map(int, input().split())
    graph[a][b] = graph[b][a] = 1
    
# DFS 탐색 시작
seen = [0] * (n+1)
DFS(v)
print()

# BFS 탐색 시작
seen = [0] * (n+1)
BFS(v)
print()

