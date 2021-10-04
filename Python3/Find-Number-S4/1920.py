
def binary_search(arr, v):
    first, last = 0, len(arr)-1
    
    while first <= last:
        mid = (first + last) // 2
        if arr[mid] == v:
            return 1
        elif arr[mid] < v:
            first = mid + 1
        else:
            last = mid - 1
    return 0


N = int(input())
A = sorted(list(map(int, input().split())))

M = int(input())
B = list(map(int, input().split()))

for i in B:
    print(binary_search(A, i))
