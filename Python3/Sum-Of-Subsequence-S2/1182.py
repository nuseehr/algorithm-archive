import sys
from itertools import combinations

N, S = map(int, sys.stdin.readline().split())
Arr = list(map(int, sys.stdin.readline().split()))
Cnt = 0

for i in range(1, N+1):
    SubArr = list(combinations(Arr, i))
    for j in SubArr:
        if sum(j) == S:
            Cnt += 1

print(Cnt)
