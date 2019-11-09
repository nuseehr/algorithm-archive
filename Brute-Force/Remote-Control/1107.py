
def main():
    target = int(input())
    cnt = int(input())

    if cnt != 0:
        brkns = list(map(str, input().split()))
    else:
        brkns = []

    n = 0
    val, val1, val2 = 0, 999999, 999999

    while True:

        if cnt == 10:
            print(abs(target-100))
            break
        if target == 100:
            print(0)
            break

        isBrkn1, isBrkn2 = False, False
        plus = list(str(target+n))
        minus = list(str(target-n))

        for i in plus:
            if i in brkns:
                isBrkn1 = True
                break

        for i in minus:
            if i in brkns:
                isBrkn2 = True

        if isBrkn1 == False:
            val1 = min(len(plus) + n, abs(target-100))

        if isBrkn2 == False:
            val2 = min(len(minus) + n, abs(target-100))

        if isBrkn1 == False or isBrkn2 == False:
            print(min(val1, val2))
            break

        if int(''.join(plus)) > 500000 and int(''.join(minus)) < 0:
            val = min(abs(0-target), abs(500000-100))
            print(val+1)
            break

        n+=1

main()

'''
1555
8
0 1 3 4 5 6 7 9
-> 670

888
3
7 8 9
-> 116

666이 아닌 1000에서 가야됨.
'''
