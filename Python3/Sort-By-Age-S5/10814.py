n = int(input())
names = []

for _ in range(n):
    age_name = list(input().split())
    age_name[0] = int(age_name[0])
    names.append(age_name)
  
names.sort(key = lambda x : (x[0]))

for i in names:
    print(i[0], i[1])

