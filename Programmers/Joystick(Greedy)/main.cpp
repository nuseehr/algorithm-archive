/*
 
 프로그래머스 - 조이스틱 (미해결)
 
 */

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(string n) {
    int answer = 0;
    string s = "";
    int len = n.size();
    for (int i=0; i<len; i++) s+= "A";
    
    int i=0, j=0;
    
    for (int i=0; i<len; i++) {
        int mn = min((n[i]-s[i]), 26-(n[i]-s[i]));
        answer += mn;
    }
    
    return answer;
}
