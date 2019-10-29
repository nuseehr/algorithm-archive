'''
프로그래머스 - 완주하지 못한 선수

풀이 1. collections 모듈 - Counter

'''
import collections

def solution(p, c):
    ans = collections.Counter(p) - collections.Counter(c)
    return list(ans.keys())[0]


'''
풀이 2. sort한 뒤에 비교하는 법.
'''

def solution(p, c):
    p.sort()
    c.sort()
    for i in range(len(c)):
        if p[i] != c[i]:
            return p[i]

    return p[len(p)-1]
