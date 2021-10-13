import heapq
import sys

N = int(sys.stdin.readline())
MinHeap = []

for i in range(N):
    Num = int(sys.stdin.readline())
    if Num == 0:
        if len(MinHeap) == 0:
            print(0)
        else:
            print(heapq.heappop(MinHeap))
    else:
        heapq.heappush(MinHeap, Num)
    
