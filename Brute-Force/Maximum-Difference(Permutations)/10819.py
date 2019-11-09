from itertools import permutations

def main():

    n = int(input())
    nums = list(map(int, input().split()))
    nums.sort()
    mx = 0

    for p in permutations(nums):
        sum = 0
        perm = list(p)
        for i in range(len(perm)-1):
            sum += abs(perm[i] - perm[i+1])

        if mx < sum:
            mx = sum

    print(mx)

main()
