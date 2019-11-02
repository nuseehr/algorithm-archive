'''
for 문을 역순으로 도는 것.

for i in range(len(h)-1, 0, -1)

반드시 숙지.
'''

def solution(h):
    ans = [0 for _ in range(len(h))]

    for i in range(len(h)-1, 0, -1):
        for j in range(i-1, -1, -1):
            if h[j] > h[i]:
                ans[i] = j+1
                break

    return ans
