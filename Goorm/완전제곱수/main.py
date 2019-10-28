'''
P1. import math.

P2. math.sqrt()는 제곱근을 구하는 함수.

P3. 1로 나눈 나머지를 구함으로써 정수인지 판별.
'''
import math

n = int(input())
ans = 0

for i in range(n):
	num = int(input())
	if math.sqrt(num) % 1 == 0:
		ans += 1

print(ans)
