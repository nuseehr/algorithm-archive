import sys
from collections import deque

dx = [-1, 1, 0, 0]
dy = [0, 0, 1, -1]

def BFS(y, x, h):
    Queue = deque()
    Queue.append([y, x])
    Seen[y][x] = 1
    
    global Zone
    
    while Queue:
        B, A = Queue.popleft()
        
        print(B, A)
        
        for i in range(4):
            nx = A + dx[i]
            ny = B + dy[i]
            
            if 0 <= ny < N and 0 <= nx < N:
                if Seen[ny][nx] == 0 and Graph[ny][nx] > h:
                    Seen[ny][nx] = 1
                    Queue.append([ny, nx])
    print("- - - - -")

N = int(sys.stdin.readline())
Graph = [[0]*N for _ in range(N)]
Seen = [[0]*N for _ in range(N)]
Zone = 0

for i in range(N):
    Graph[i] = list(map(int, sys.stdin.readline().split()))

for i in range(N):
    print(Graph[i])
    
Max = max(max(Graph))
Min = min(min(Graph))
print(Max, Min)

for y in range(N):
    for x in range(N):
        if Seen[y][x] == 0:
            BFS(y, x, 4)
        
print()

'''
for i in range(Min, Max):
    BFS(0, 0, i)
'''
print()
