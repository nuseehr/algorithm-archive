import sys

N, M = map(int, sys.stdin.readline().split())

Arr = list(map(int, sys.stdin.readline().split()))
SumArr = [0]
tmp = 0

# 첫번쨰 원소부터 각 원소까지의 합을 저장한다.
for e in Arr:
    tmp += e
    SumArr.append(tmp)

# b까지의 합에서 a까지의 합을 빼주면 그것이 구간 합과 같다.
for _ in range(M):
    a, b = map(int, sys.stdin.readline().split())
    print(SumArr[b] - SumArr[a-1])
