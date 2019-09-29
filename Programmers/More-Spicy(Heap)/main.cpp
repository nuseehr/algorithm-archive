/*
 
 프로그래머스 - 더 맵게.
 Heap - Priority Queue의 정확한 쓰임새.
 
 */

#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> s, int K) {
    int answer = 0;
    priority_queue<int> pq;
    
    // 오름차순으로 원소를 저장하기 위함. 마이너스(-) 붙임.
    for (auto e: s) pq.push(-e);
    
    while (pq.size() >= 2 && -pq.top() < K) {
        int t1 = pq.top();
        pq.pop();
        int t2 = pq.top()*2;
        pq.pop();
        
        pq.push(t1+t2);
        answer++;
    }
    
    if(-pq.top() < K) answer = -1;
    
    return answer;
}
