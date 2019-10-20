N = int(input());

stack = []

for i in range(N):
    num = int(input())
    if num != 0:
        stack.append(num)
    else:
        stack.pop(-1)

print(sum(stack))
