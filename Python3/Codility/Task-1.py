'''
Task 1. 배열 A에서 짝수 최대값, 홀수 최대값의 합 구하기.

IN                      OUT
A = [5, 3, 10, 6, 11]   21
IN                      OUT
A = [20, 10, 7, 5]      27
IN                      OUT
A = [7, 13, 15, 13]     15
IN                      OUT
A = [2, 6, 4, 6]        6
'''

def solution(A):
    A.sort()
    Odd = False
    Even = False
    Result = 0
    
    while A:
        e = A.pop()
        if e % 2 == 0 and Even = False:
            Result += e
            Even = True
        elif e % 2 == 1 and Odd = False:
            Result += e
            Odd = True
        if Odd == True and Even == True:
            break
            
    return Result
