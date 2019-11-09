import sys

def main():
    N, K = list(map(int, input().split()))
    mx = 100001
    q = [N]
    visited = [False] * mx
    d = [0] * mx
    sec = 0

    while q:
        print(q)
        cur = q.pop(0)
        sec = d[cur] + 1

        if cur == K:
            break

        if cur-1 >= 0 and not visited[cur-1]:
            visited[cur-1] = True
            d[cur-1] = sec
            if cur-1 == K:
                break
            q.append(cur-1)

        if cur+1 < mx and not visited[cur+1]:
            visited[cur+1] = True
            d[cur+1] = sec
            if cur+1 == K:
                break
            q.append(cur+1)

        if cur*2 < mx and not visited[cur*2]:
            visited[cur*2] = True
            d[cur*2] = sec
            if cur*2 == K:
                break
            q.append(cur*2)

    print(d[K])

main()
