import sys

def DFS(Cur, Cost, Cnt):
    #print(Cur, "/", Cost, "/", Cnt, Seen)
    global MinCost

    if Cnt == N:
        if Graph[Cur][0] > 0:
            #print(MinCost, Cost+Graph[Cur][0])
            MinCost = min(MinCost, Cost+Graph[Cur][0])
        return
        
    for i in range(N):
        if Graph[Cur][i] > 0 and Seen[i] == 0:
            Seen[i] = 1
            DFS(Cur=i, Cost=Cost+Graph[Cur][i], Cnt=Cnt+1)
            Seen[i] = 0





N = int(sys.stdin.readline())
Graph = [[0]*N for _ in range(N)]
Seen = [0 for _ in range(N)]

for i in range(N):
    Graph[i] = list(map(int, sys.stdin.readline().split()))

Seen[0] = 1
MinCost = sys.maxsize
DFS(Cur=0, Cost=0, Cnt=1)

print(MinCost)
