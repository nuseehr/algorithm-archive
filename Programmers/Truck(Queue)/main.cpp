#include <queue>
#include <iostream>
#include <vector>

using namespace std;

/*
 
 프로그래머스 - 다리를 지나는 트럭 문제.
 
 */

int solution(int len, int wt, vector<int> wts) {
    queue<int> q;
    int sum=0, cur=0, cnt=0;
    
    for (int i=0; i<wts.size(); i++) {
        cur = wts[i];
        
        while (true) {
            if (q.empty()) {
                q.push(cur);
                cnt++;
                sum += cur;
                break;
            }
            else if (q.size() == len) {
                sum -= q.front();
                q.pop();
            }
            else {
                if (sum + cur > wt) {
                    q.push(0);
                    cnt++;
                }
                else {
                    q.push(cur);
                    cnt++;
                    sum += cur;
                    break;
                }
            }
        }
    }
    return cnt + len;
}
