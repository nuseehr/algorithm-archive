
def main():
    N = input()
    brokens = int(input())
    btns = [1] * 10
    nums = list(map(int, input().split()))
    aprox = 0
    digit = len(N)-1
    click = 0

    for i in nums:
        btns[i] = 0

    if int(N) >= 98 and int(N) <= 103:
        print(abs(100-int(N)))
        return

    for i in N:
        print(i)
        if btns[int(i)]:
            print('aprox', aprox)
            aprox += int(i) * (10 ** digit)
            print('aprox?', aprox)
            digit -= 1
            click += 1

        else:
            print('else ', i)
            g = k = int(i)

            while not btns[k] and k > 0:
                k-=1
            while not btns[g] and g < 9:
                g+=1


            if abs(int(i) - k) >= abs(int(i) - g):
                if btns[k]:
                    aprox += k * (10 ** digit)
                    digit-=1
                    click += 1
                else:
                    aprox += g * (10 ** digit)
                    digit-=1
                    click += 1

            else:
                if btns[g]:
                    aprox += g * (10 ** digit)
                    digit-=1
                    click += 1

            print('aprox = ', aprox)

    print(aprox)
    print(abs(int(N)-aprox) + int(click))

main()
