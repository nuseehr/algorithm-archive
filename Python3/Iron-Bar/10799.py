import sys
from collections import deque

bar = sys.stdin.readline().rstrip()
stk = deque()
answer = 0

for i in range(len(bar)):
    if bar[i] == "(":
        stk.append(bar[i])

    else:
        if bar[i-1] == "(":
            stk.pop()
            answer += len(stk)
        else:
            stk.pop()
            answer += 1

print(answer)
