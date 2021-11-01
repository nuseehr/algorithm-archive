import sys
import operator

N, M = map(int, (sys.stdin.readline().split()))
Dna = []
Answer = ""
Cnt = 0

for i in range(N):
    Dna.append(sys.stdin.readline().rstrip())
    
# ord 함수는 문자를 ASCII 코드 숫자로 치환함.
# chr 함수는 ASCII코드를 문자로 치환함.
for i in range(M):
    Alphabet = [0 for _ in range(26)]
    for j in range(N):
        Alphabet[ord(Dna[j][i])-65] += 1
    Answer += chr(Alphabet.index(max(Alphabet)) + 65)
    Cnt += sum(Alphabet) - max(Alphabet)
    
print(Answer)
print(Cnt)

