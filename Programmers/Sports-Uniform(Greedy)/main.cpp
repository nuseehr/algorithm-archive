#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int students[100] = {0, };
    for (int e: lost) students[e]--;
    for (int e: reserve) students[e]++;
    
    for (int i=1; i<=n; i++) {
        if (students[i] == -1) {
            if (students[i-1] == 1) {
                students[i-1] = 0;
                students[i] = 0;
            }
            else if (students[i+1] == 1) {
                students[i+1] = 0;
                students[i] = 0;
            }
        }
    }
    
    for (int i=1; i<=n; i++) {
        if (students[i] != -1)  answer++;
    }
    return answer;
}
