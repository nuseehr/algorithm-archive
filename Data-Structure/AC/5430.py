import sys


def main():
    t = int(input())

    while t:
        cmd = input()
        length = int(input())
        arr = sys.stdin.readline().rstrip()
        arr = arr[1:-1].split(',')
        rvs = False
        e = True
        frnt = 0
        rear = 0

        for c in cmd:
            try:
                if c == 'R':
                    rvs = not rvs
                elif c == 'D' and not rvs:
                    frnt += 1
                elif c == 'D' and rvs:
                    rear += 1
            except:
                e = False
                print('error')
                break

        if e:
            if frnt+rear <= length:
                if not rvs:
                    arr = arr[frnt:length-rear]
                    print(str(arr).replace('\'', '').replace(' ',''))
                else:
                    arr = arr[::-1][rear:length-frnt]
                    print(str(arr).replace('\'', '').replace(' ',''))

            else:
                print('error')

        t-=1

main()
