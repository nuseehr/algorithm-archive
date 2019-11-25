def divide(size, y, x):
    print(size, y, x)
    if y == r and x == c:
        print(ans)
        return
    if size == 1:
        ans += 1
        return
    if not (y<=r and r<y+size and x<=c and c<x+size):
        ans = size*size
        return

    half = size//2
    divide(half, y, x)
    divide(half, y, x+half)
    divide(half, y+half, x)
    divide(half, y+half, x+half)



n, r, c = map(int, input().split())
global ans
ans = 0
divide(2**n, 0, 0)
