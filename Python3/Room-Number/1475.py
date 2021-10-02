
A = [0 for _ in range(10)]
# N = list(map(int, input())) 을 안하는 이유 = 문자열 반복문 해야되기 때문
N = input()

for i in N:
    idx = int(i)
    if idx == 9 or idx == 6:
        if A[9] < A[6]:
            A[9] += 1
        else:
            A[6] += 1
    else:
        A[idx] += 1
    
#print(A)
print(max(A))
