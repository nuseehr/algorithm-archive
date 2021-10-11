import sys
from collections import deque

N, M = map(int, sys.stdin.readline().split())
Arr = list(map(int, sys.stdin.readline().split()))
Q = deque([i for i in range(1, N+1)])
    
i = 0
Cnt = 0
while len(Q) != N-M:
    idx = Q.index(Arr[i])
    if Q[0] == Arr[i]:
        Q.popleft()
        i += 1
    else:
        if idx <= (len(Q) // 2):
            for j in range(idx):
                T = Q.popleft()
                Q.append(T)
                Cnt += 1
        else:
            for j in range(len(Q)-idx):
                T = Q.pop()
                Q.appendleft(T)
                Cnt += 1

print(Cnt)
