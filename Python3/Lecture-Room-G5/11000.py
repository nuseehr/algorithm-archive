import sys
import heapq

N = int(sys.stdin.readline())
TimeTable = []

# 힙으로 사용할 배열을 선언한다. - 최소 힙.
Room = []

# 강의 시작시간과 종료시간을 TimeTable 배열에 담는다
for i in range(N):
    S, T = map(int, sys.stdin.readline().split())
    TimeTable.append([S, T])

# 시작시간을 기준으로 정렬한다.
TimeTable.sort(key=lambda x:x[0])
heapq.heappush(Room, TimeTable[0][1])

'''
강의실의 수를 담을 Room에 강의 종료 시간을 넣어준다.
힙 안에 있는 최소 힙의 강의 종료시간보다 TimeTable 배열 안에서
이른 시간이 나오면 그것은 강의실이 하나 더 필요함을 나타낸다.
'''
for i in range(1, N):
    if TimeTable[i][0] < Room[0]:
        heapq.heappush(Room, TimeTable[i][1])
    else:
        heapq.heappop(Room)
        heapq.heappush(Room, TimeTable[i][1])
        
print(len(Room))
