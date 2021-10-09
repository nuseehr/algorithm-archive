
import sys
from queue import PriorityQueue

N = int(sys.stdin.readline())
Room = PriorityQueue()

for i in range(N):
    S, T = map(int, sys.stdin.readline().split())
    Room.put((S, T))

Mn = []

for i in range(Room.qsize()):
    Time = Room.get()
    if i == 0:
        Mn.append(Time[1])
    else:
        Start = min(Mn)
        if Time[0] >= Start:
            del Mn[Mn.index(Start)]
            Mn.append(Time[1])
        else:
            Mn.append(Time[1])

print(len(Mn))


'''
print(Room)
MN = Room.get()[1]
CNT = 1

for i in range(1, N):
    print(Room()[0], MN)
    if Room[i][0] >= MN:
        MN = Room[i][0]
    else:
        CNT += 1

print(CNT)
'''
