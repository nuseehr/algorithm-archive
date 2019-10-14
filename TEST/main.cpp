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
