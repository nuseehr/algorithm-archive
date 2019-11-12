split_minus = [i for i in input().split('-')]
arr = []

for i in split_minus:
    split_plus = [int(y) for y in i.split('+')]
    arr.append(sum(split_plus))


print(arr[0] - sum(arr[1:]))
