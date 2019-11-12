import pprint

n = int(input())
table = []

for i in range(n):
    s, t = map(int, input().split())
    table.append([s, t])

table.sort()

pp = pprint.PrettyPrinter(width=20, indent=2)
pp.pprint(table)
