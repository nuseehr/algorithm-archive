import sys
sys.setrecursionlimit(2000)

def DFS(v):
    # 방문 표시
    Seen[v] = 1

    # 연결된 다음 노드 탐색
    idx = Arr[v]

    # 방문하지 않았을 경우 탐색.
    if Seen[idx] == 0:
        DFS(idx)
    

TestCases = int(sys.stdin.readline())

while TestCases:
    # 노드 수 입력 받는다.
    N = int(sys.stdin.readline())
    
    # Graph 연결 관계를 정의할 배열 선언. 
    Graph = [[0]*(N+1) for _ in range(N+1)]
    Seen = [0] * (N+1)
    Arr = [0] + list(map(int, sys.stdin.readline().split()))

    #Cycle은 DFS 탐색이 한번씩 끝날때마다 카운트 한다.
    Cycle = 0
    
    # index와 입력받은 수의 관계를 나타내기 위해 배열을 받아 아래와 같이 선언한다.
    # 양방향이 아닌 단방형성임을 주의.
    for i in range(1, N+1):
        Graph[i][Arr[i]] = 1
    
    for i in range(1, N+1):
        if Seen[i] == 0:
            Cycle += 1
            DFS(i)
            
    TestCases -= 1
    print(Cycle)
    
