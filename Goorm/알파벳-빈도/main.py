'''

P1. import string, string.ascii_lowercase를 활용하는 것.
P2. alpa = {} 딕셔너리를 통해 map 처럼 활용가능.

'''
import string

cmd = str(input())
alpa = {}
ans = []
l = list(string.ascii_lowercase)
u = list(string.ascii_uppercase)

for i in range(26):
	alpa[l[i]] = 0
	alpa[u[i]] = 0

for i in cmd:
	if i == ' ':
		continue
	else:
		alpa[i] += 1

for i in range(26):
	ans.append(alpa[l[i]] + alpa[u[i]])

for i in range(26):
	print(l[i], ':', ans[i])
