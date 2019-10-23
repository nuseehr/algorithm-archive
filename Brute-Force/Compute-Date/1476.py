
def main():
    E, S, M = list(map(int , input().split()))
    y = 0

    while True:
        if E == S == M == 1:
            y += 1
            break

        E -= 1
        S -= 1
        M -= 1
        y += 1

        if E == 0:
            E = 15
        if S == 0:
            S = 28
        if M == 0:
            M = 19

    print(y)

main()
