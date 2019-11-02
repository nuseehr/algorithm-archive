'''

idx 를 같이 저장하려
pair, heapq 같은 거 쓰지 말자.

'''
def solution(p, idx):
    ans = 0
    mx = max(p)

    while True:
        v = p.pop(0)
        if mx == v:
            ans += 1
            if idx == 0:
                break
            else:
                idx -= 1
        else:
            p.append(v)
            if idx == 0:
                idx = len(p)-1
            else:
                idx -= 1

    return ans
