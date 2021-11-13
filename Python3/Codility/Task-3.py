'''
Task 3. 문자열에서 같은 길이로 만들기 위한 최소값 구하기.

IN                                      OUT
A = [1, 1, 3, 4, 4, 4]                  3
IN                                      OUT
A = [1, 2, 2, 2, 5, 5, 5, 8]            4
IN                                      OUT
A = [1, 1, 1, 1, 3, 3, 4 ,4 ,4 ,4, 4]   5
IN                                      OUT
A = [10, 10, 10]                        3

'''

def solution(A):
    Result = 0
    Temp = 0
    i = 0
    j = 0
    
    while i < len(A):
        while j < len(A) and A[i] == A[j]:
            j += 1
        Temp = j - i
        Result += min(abs(A[i]-Temp), Temp)
        i = j
            
    return Result


