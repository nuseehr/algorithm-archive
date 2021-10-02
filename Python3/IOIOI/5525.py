
N = int(input())
M = int(input())
S = input()

I = 1
Word = 0
Count = 0

while I < M-1:

    if S[I-1:I+2] == "IOI":
        I += 1
        Word += 1
        if Word == N:
            Word -= 1
            Count += 1
    else:
        Word = 0

    I += 1
    
print(Count)
