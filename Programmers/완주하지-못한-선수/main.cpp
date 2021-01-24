/*

완주하지 못한 선수 C++ 풀이. 풀이 요약.

smry 1. for (auto e: arr) 을 통해서 벡터 element 접근.
smry 2. map<string, int> 2개를 통해서 해당 element 체크.
smry 3. map 반복은 for(auto it=m.begin(); it!=m.end(); it++), it->first, it->second를 통해 접근.

*/

#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

string solution(vector<string> p, vector<string> c) {
    string answer = "";
    map<string, int> m;
    
    
    for(auto e: p) m[e]++;
    for(auto e: c) m[e]--;
    
    for(auto it=m.begin(); it!=m.end(); it++) {
        cout << it->second << " " << it->first;
        if(it->second == 1) answer = it->first;
    }
    
    return answer;
}
