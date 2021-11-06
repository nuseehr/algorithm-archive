import sys
from collections import deque

TestCase = int(sys.stdin.readline())

dx = [-2, -1, 1, 2,  2,  1, -1, -2]
dy = [ 1,  2, 2, 1, -1, -2, -2, -1]

def BFS(Sy, Sx, Ey, Ex):
    Queue = deque()
    Queue.append([Sy, Sx])
    Seen[Sy][Sx] = 1
    
    while Queue:
        B, A = Queue.popleft()
        
        if B == Ey and A == Ex:
            #print(Seen[B][A], "도착 !!")
            return Seen[B][A] - 1
        
        for i in range(8):
            nx = A + dx[i]
            ny = B + dy[i]
            if 0 <= ny < N and 0 <= nx < N:
                if Seen[ny][nx] == 0:
                    #print(ny, nx, "방문")
                    Seen[ny][nx] = Seen[B][A] + 1
                    Queue.append([ny, nx])
    
    '''
        for i in range(N):
            for j in range(N):
                print(Seen[i][j], end=' ')
            print()
        print("- - - - - -")
    '''

    
while TestCase:
    N = int(sys.stdin.readline())
    Seen = [[0]*N for _ in range(N)]
    Sx, Sy = map(int, sys.stdin.readline().split())
    Ex, Ey = map(int, sys.stdin.readline().split())
    
    Ans = BFS(Sy, Sx, Ey, Ex)
    print(Ans)
    
    TestCase -= 1
