import sys
testCase = int(sys.stdin.readline())

# 테스트 케이스
while testCase:

    n = int(sys.stdin.readline())
    empl = []
    answer = n

    for i in range(n):
        a, b = map(int, sys.stdin.readline().split())
        # 2차 배열로 서류, 면접 접수를 넣어준다.
        empl.append([a, b])

    # 첫번째 인자를 기준으로 정렬한다.
    empl.sort(key=lambda x:x[0])
    mn = empl[0][1]

    # 정렬한 결과에서 두번째 인자 또한 더 클 경우 채용하지 않는다.
    # mn이 두번째 인자보다 더 클 경우 mn값을 해당 점수로 조정해준다.
    for i in range(1, n):
        if mn < empl[i][1]:
            answer -= 1
        else:
            mn = empl[i][1]

    print(answer)
    testCase -= 1
