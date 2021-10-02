
a, b, v = map(int, input().split())

height = 0
day = 0

while True:
    print(a,b,v,day,height)
    day += 1
    height += a
    if height >= v:
        print("finish")
        print("DAY = ",day)
        break
    height -= b
    
    
