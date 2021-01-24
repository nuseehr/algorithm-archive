/*

완주하지 못한 선수 C++ 풀이.

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
