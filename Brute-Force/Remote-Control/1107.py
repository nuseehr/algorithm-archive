
def main():
    channel = int(input())
    cnt = int(input())

    if cnt != 0:
        nums = list(map(str, input().split()))
    else:
        nums = []

    n = 0
    val, val1, val2 = 0, 999999, 999999

    while True:

        if cnt == 10:
            print(abs(channel-100))
            break
        if channel == 100:
            print(0)
            break

        tf1, tf2 = True, True
        channel_p = list(str(channel+n))
        channel_m = list(str(channel-n))

        for i in channel_p:
            if i in nums:
                tf1 = False
                break

        if tf1 == True:
            val1 = min(len(channel_p) + n, abs(channel-100))

        for i in channel_m:
            if i in nums:
                tf2 = False

        if tf2 == True:
            val2 = min(len(channel_m) + n, abs(channel-100))

        if tf1 == True or tf2 == True:
            print(min(val1, val2))
            break

        if int(''.join(channel_p)) > 500000 and int(''.join(channel_m)) < 0:
            val = min(abs(0-channel), abs(500000-100))
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
