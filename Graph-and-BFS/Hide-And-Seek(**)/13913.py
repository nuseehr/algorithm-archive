
from collections import deque

def main():
    q = deque()
    q.append(N)

    while q:
        cur = q.popleft()
        if cur == K:
            print(d[K])
            p = []
            while cur != N:
                p.append(cur)
                cur = prev[cur]
            p.append(N)
            p.reverse()
            print(' '.join(map(str, p)))
            return

        for ncur in (cur-1, cur+1, cur*2):
            if 0 <= ncur < mx and not d[ncur]:
                d[ncur] = d[cur] + 1
                prev[ncur] = cur
                q.append(ncur)


mx = 100001
N, K = map(int, input().split())
d = [0] * mx
prev = [0] * mx
main()
