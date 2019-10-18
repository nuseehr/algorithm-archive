import sys

n = 9
arr = []
fnd = False;

for _ in range(n):
    arr.append(int(input()));

arr.sort()
sum = sum(arr);

for i in range(n):
    for j in range(i+1, n):
        if not fnd and sum - (arr[i]+arr[j]) == 100:
            arr[i] = -1
            arr[j] = -1
            fnd = True
            break
    
    if arr[i] != -1:
        print(arr[i])
            
