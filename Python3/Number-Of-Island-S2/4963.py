import sys
sys.setrecursionlimit(100000)

dx = [-1, 1, 0, 0, -1, 1, -1, 1]
dy = [0, 0, 1, -1, 1, 1, -1, -1]

def DFS(y, x, Cnt):
    Seen[y][x] = 1
    # print('[', y, ',', x, ']')
    '''
    for i in range(H):
        print(Seen[i])
    '''
    global Num
    
    if Graph[y][x] == 1:
        Num += 1
 
    for i in range(8):
        nx = x + dx[i]
        ny = y + dy[i]
        
        if 0 <= ny < H and 0 <= nx < W:
            if Seen[ny][nx] == 0 and Graph[ny][nx] == 1:
                # print('CALL DFS [', ny, ',', nx, ']')
                DFS(ny, nx, Cnt)
    return Num
    
while True:
    W, H = map(int, sys.stdin.readline().split())
    Cnt = 1
    Num = 0
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
                    Ans.append(DFS(y, x, Cnt))
                    Num = 0
        print(len(Ans))
