# BFS
import sys
from collections import deque

dx = [-1, 1, 0, 0, -1, 1, -1, 1]
dy = [0, 0, 1, -1, 1, 1, -1, -1]

def BFS(y, x):
    global Num
    Queue = deque()
    Queue.append([y, x])
    Seen[y][x] = 1
    
    while Queue:
        B, A = Queue.popleft()
        for i in range(8):
            nx = A + dx[i]
            ny = B + dy[i]
            
            if 0 <= ny < H and 0 <= nx < W:
                if Seen[ny][nx] == 0 and Graph[ny][nx] == 1:
                    Seen[ny][nx] = 1
                    Num += 1
                    Queue.append([ny, nx])
    
    return Num


while True:
    W, H = map(int, sys.stdin.readline().split())
    Num = 1
    Ans = []
    
    if W == 0 and H == 0:
        break
        
    else:
        Graph = [[0]*W for _ in range(H)]
        Seen = [[0]*W for _ in range(H)]
        
        for i in range(H):
            Graph[i] = list(map(int, sys.stdin.readline().split()))
        
        for y in range(H):
            for x in range(W):
                if Graph[y][x] == 1 and Seen[y][x] == 0:
                    Ans.append(BFS(y, x))
                    Num = 1
    print(len(Ans))
        
