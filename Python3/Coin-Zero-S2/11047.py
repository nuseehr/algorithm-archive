import sys

N, K = map(int, sys.stdin.readline().split())
A = []
CNT = 0

# 문제의 조건에서 오름차순으로 입력이 들어온다고 했으므로
# 내림차순으로 정렬하기 위해 list.insert(0, 원소)로 왼쪽에 추가한다.
for i in range(N):
    C = int(sys.stdin.readline())
    A.insert(0, C)

# 동전 수 = 남은금액을 가치로 나눈 몫,
# 남은 금액 = 남은 금액을 가치로 나눈 나머지.
for i in range(N):
    if A[i] <= K:
        CNT += K // A[i]
        K = K % A[i]

print(CNT)
    
