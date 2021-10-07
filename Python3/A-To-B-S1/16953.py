import sys

A, B = map(int, sys.stdin.readline().split())
Cnt = 0
Find = True

while B != A:
    # 1의 자리가 1이 아니면서 홀수인 수는 바로 반복문을 빠져나간다.
    # 그 외 연산을 시도하다가 찾을 수 없는 경우인 A > B 경우도 걸러준다.
    if (B % 10 != 1 and B % 2 != 0) or A > B:
        Find = False
        break
    else:
        # 1의 자리가 1인 경우는 1을 빼준다.
        if B % 10 == 1:
            B = B // 10
            Cnt += 1
        # 짝수인 경우는 2로 나눠준다.
        else:
            B = B // 2
            Cnt += 1
        
if Find:
    print(Cnt+1)
else:
    print(-1)
        
    
