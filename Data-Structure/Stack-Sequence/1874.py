n = int(input())

seq = []
stack = []
idx = 0
cnt = 0
str = ""

for i in range(n):
    num = int(input())
    seq.append(num)

while True:
    if not stack and idx != n:
        str += "+"
        cnt += 1
        stack.append(cnt)

    if idx == n:
        for i in range(len(str)):
            print(str[i])
        break;

    if seq[idx] != stack[-1]:
        str += "+"
        cnt += 1
        print("cnt", cnt)
        if cnt > n:
            print('NO')
            break
        stack.append(cnt)

    elif seq[idx] == stack[-1]:
        str += "-"
        idx += 1
        stack.pop(-1)
