'''

for문 범위 조건을
if절 안에서 해결가능하다. 
'''


def main():
	n = int(input())
	ans = []

	while n != 1:
		for i in range(2, n+1):
			if n % i == 0:
				ans.append(str(i))
				n = n//i
				break

	print(' '.join(ans))

main()
