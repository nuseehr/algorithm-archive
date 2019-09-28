/*

프로그래머스 - 가장 큰 수.

*/

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// compare 함수를 새로 정의한 점을 주목하자.
bool compare(const string &a, const string &b) {
    if (a+b > b+a) return true;
    return false;
}

string solution(vector<int> nums) {
    vector<string> s;
    string answer = "";
    
    // int -> string은 to_string으로 해결.
    for (auto e: nums) s.push_back(to_string(e));
    
    // 이 문제에서 가장 포인트
    sort(s.begin(), s.end(), compare);
    
    for (auto it = s.begin(); it < s.end(); ++it)
        answer += *it;

    if (answer[0] == '0')
        answer = "0";
    
    return answer;
}
