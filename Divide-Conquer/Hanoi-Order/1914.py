'''
메모리 초과 나는 코드.

def hanoi(N, _from, _tmp, _to):
    if N == 1:
        v.append([_from, _to])
    else:
        hanoi(N-1, _from, _to, _tmp)
        v.append([_from, _to])
        hanoi(N-1, _tmp, _from, _to)


N = int(input())
v = []
hanoi(N, 1, 2, 3)
print(len(v))
if N <= 20:
    for i in v:
        print(i[0], i[1]);

'''

def hanoi(N, _from, _tmp, _to):
    if N == 1:
        print(_from, _to)
    else:
        hanoi(N-1, _from, _to, _tmp)
        print(_from, _to)
        hanoi(N-1, _tmp, _from, _to)


N = int(input())
print(2**N - 1)

if N <= 20:
    hanoi(N, 1, 2, 3)
