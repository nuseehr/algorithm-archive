'''

소수 찾는 범위 =>
n//2 + 1
확실하게 해둘 것.

'''

from itertools import permutations
import math

def isPrime(n):
    if n < 2:
        return False
    else:
        for i in range(2, n//2+1):
            if n % i == 0:
                return False
    return True

def solution(nums):
    ans = 0
    ns = []
    for i in range(len(nums)):
        case = list(set(map(''.join,permutations(nums, i+1))))
        for j in case:
            ns.append(int(j))

    ns = list(set(ns))
    for i in ns:
        if isPrime(i)== True:
            ans +=1

    return ans
