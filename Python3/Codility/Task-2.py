'''
Task 2. 문자열에서 같은 길이로 만들기 위한 최소값 구하기.

IN                      OUT
S = "babaa"             3
IN                      OUT
S = "bbbab"             4
IN                      OUT
S = "bbbaaabbb"         0

'''
from itertools import groupby

def solution(S):
    Result = 0
    Arr = [len("".join(val)) for key, val in groupby(S)]
    Mx = max(Arr)
    
    for i in Arr:
        Result += Mx-i
            
    return Result

if __name__ == '__main__':
    print(solution("babaa"))
