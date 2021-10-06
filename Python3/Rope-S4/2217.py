
import sys
N = int(sys.stdin.readline())
R = []
SUM = []

for i in range(N):
    E = int(sys.stdin.readline())
    R.append(E)

R.sort(reverse=True)
for i in range(N):
    SUM.append(R[i]*(i+1))

print(max(SUM))
