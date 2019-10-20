# 반드시 deque를 import 해야 시간초과가 나지 않는다.

from collections import deque

def main():
    dq = deque()
    N = int(input())

    for i in range(1, N+1):
        dq.append(i)

    while True:
        if len(dq) == 1:
            print(dq[0])
            break
        dq.popleft()
        dq.append(dq.popleft())

main()
