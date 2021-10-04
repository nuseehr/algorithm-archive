import sys
from collections import deque

bar = sys.stdin.readline().rstrip()
stk = deque()
answer = 0

for i in range(len(bar)):
    
    # 막대기 시작 괄호인 경우 바로 스택에 넣어준다.
    if bar[i] == "(":
        stk.append(bar[i])

    # 닫는 막대기인 경우 레이저인 경우와 막대기의 끝인 경우 2가지이다.
    else:
        # 레이저인 경우 잘려나간 막대기의 갯수를 더해준다.
        if bar[i-1] == "(":
            stk.pop()
            answer += len(stk)
            
        # 막대기의 끝인 경우 해당 막대기의 끝 갯수 1개를 더해준다.
        else:
            stk.pop()
            answer += 1

print(answer)
