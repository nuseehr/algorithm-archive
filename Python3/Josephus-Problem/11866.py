from collections import deque

N, K = map(int, input().split())

A = deque([])

for i in range(N):
    A.append(i+1)
    
print("<", end='')

while A:
    for _ in range(K-1):
        A.append(A[0])
        A.popleft()
    
    if len(A) > 1:
        print(A.popleft(), end=', ')
    else:
        print(A.popleft(), end='')

print(">")
        



