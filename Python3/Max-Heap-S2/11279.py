'''
최소 힙을 이용한 문제같은 경우는 백준 11000 강의실 배정 문제를 확인해보자.
'''

# MaxHeap을 꺼내기 위한 트릭.
# heapq는 최소힙이 기본이기 때문에 튜플로 넣어준다.
import heapq
import sys
N = int(sys.stdin.readline())
MaxHeap = []

for _ in range(N):
  Num = int(sys.stdin.readline())
  if Num != 0:
    heapq.heappush(MaxHeap, (-Num, Num))
    
  else:
    if len(MaxHeap) == 0:
      print(0)
    else:
      Item = heapq.heappop(MaxHeap)[1]
      print(Item)
