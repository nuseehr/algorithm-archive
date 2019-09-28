/*
 
 작은 Tip. 배열에서 max, min 찾기 - 프로그래머스 문제 풀다가.
 
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(2);

    cout << *min_element(vec.begin(), vec.end()) << endl;
    cout << *max_element(vec.begin(), vec.end()) << endl;
    
}
