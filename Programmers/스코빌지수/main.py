'''
스코빌 지수 -

테스트케이스 중 알 수 없는 실패 사례.

if len(sco) == 0:
    print(-1)
    break

if len(sco) == 0:
    return -1
으로 바꾸니 해결.

'''


import heapq

def solution(sco, K):
    heapq.heapify(sco)
    ans = 0

    while True:
        first = heapq.heappop(sco)

        if first >= K:
            break
        if len(sco) == 0:
            return -1

        second = heapq.heappop(sco) * 2
        heapq.heappush(sco, first + second)
        ans += 1


    return ans
