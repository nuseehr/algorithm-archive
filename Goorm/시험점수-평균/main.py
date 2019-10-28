'''
P1. 소수점 둘째자리까지 표현하는 것 숙지.
print('%.2f' %val)
'''

import sys
nums = list(map(int, input().split()))
m = round(sum(nums)/len(nums), 2)
if m >= 90:
	print('%.2f' %m, 'A')
elif m >= 80:
	print('%.2f' %m, 'B')
elif m >= 70:
	print('%.2f' %m, 'C')
elif m >= 60:
	print('%.2f' %m, 'D')
else:
	print('%.2f' %m, 'F')
