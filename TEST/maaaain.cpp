/*
 
 11번가 코딩 테스트 19.10.12
 
 */

// 코딩 테스트 - 1번

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int N) {
    vector<int> answer;
    vector<int> v;

    int mx = 1;
    for (int i=2; i<11; i++) {
        int mul = 1;
        int tmp = N;

        while (true) {
            v.push_back(tmp%i);
            tmp/=i;
            if (tmp == 0) break;
        }

        for (auto it = v.rbegin(); it!=v.rend(); it++) {
            if (*it != 0) mul *= *it;
        }

        v.clear();
        if (mul >= mx) {
            mx = mul;
            answer.clear();
            answer.push_back(i);
            answer.push_back(mul);
        }
    }

    return answer;
}

// 코딩 테스트 - 2번

#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int solution(vector<int> v) {
    int mx = 0;
    int sum = 0;
    int len = v.size();
    sort(v.begin(), v.end());

    while (true) {
        sum = 0;
        if(!next_permutation(v.begin(), v.end())) break;

        for (int i=0; i<len-1; i++) {
            sum += abs(v[i] - v[i+1]);
        }
        if (sum > mx) mx = sum;
    }
    return mx;
}


/*

진학사 코딩 테스트 19.10.27

*/



// 코딩테스트 1번

def solution(num):

while True:
    s = str(num)
    f = r = 1
    l = int(len(s))
    
    if l%2 != 0:
        num+=1
        continue

    for i in range(l//2):
        f *= int(s[i])

    for i in range(l//2, l):
        r *= int(s[i])

    if f == r:
        answer = num
        break

    num += 1

return answer
                   


// 코딩테스트 2번

#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

vector<string> solution(vector<string> movie) {
    vector<string> answer;
    map<string, int, less<string>> m;
    priority_queue<int> pq;
    map<string, int>::iterator it;
    
    for(auto e: movie) m[e]++;

    for (auto it=m.begin(); it!=m.end(); it++) {
        pq.push(it->second);
    }
    
    it = m.begin();
    while(!pq.empty()) {
        if (pq.top() == it->second) {
            answer.push_back(it->first);
            pq.pop();
            m.erase(it->first);
            it = m.begin();
        }
        else it++;
    }
               
    return answer;
}
