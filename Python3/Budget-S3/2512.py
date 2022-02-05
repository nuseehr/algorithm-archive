import sys

# 문제에서 주어진 값 세팅, 예산 요청배열, 예산
N = int(sys.stdin.readline())
Cities = list(map(int, sys.stdin.readline().split()))
Budget = int(sys.stdin.readline())

# 이분탐색을 통해 각 도시의 배정할 예산값을 구한다.
# 이분탐색을 위한 시작값, 끝값 설정.
Start, End = 0, max(Cities)

while Start <= End:
    # Mid는 배정값을 찾기 위한 변수
    Mid = (Start + End) // 2
    TotalAmount = 0

    # 주어진 요청에 맞는 예산 배정
    # 요청값이 더 클 경우 배정값을 더함,
    # 배정값이 더 클경우 해당 원소를 더해줌.
    for e in Cities:
        if e >= Mid:
            TotalAmount += Mid
        else:
            TotalAmount += e

    # TotalAmount 이 작은 경우 Start 값을 바꿔준다.
    if TotalAmount <= Budget:
        Start = Mid + 1
    else:
        End = Mid - 1

print(End)
