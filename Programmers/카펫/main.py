'''

아이디어를 떠올리는 것을 배우자.
중간에 레드가 있다는 것은
가로 길이-2 * 세로 길이-2 만큼 존재한다는 것이다.

'''

def solution(brown, red):
    answer = []
    br = brown + red

    for b in range(1, br+1):
        if br % b != 0:
            continue
        
        r = br // b
        if (b-2)*(r-2) == red:
            return sorted([b, r], reverse = True)

    return answer
