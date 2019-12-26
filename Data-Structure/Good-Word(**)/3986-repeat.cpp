#include <iostream>
#include <stack>
#include <string>

using namespace std;

int N;
int answer=0;

int main() {
    string s;
    scanf("%d", &N);
    
    for (int i=0; i<N; i++) {
        stack<char> stk;
        cin >> s;
        
        for (int j=0; j<s.size(); j++) {
            if (stk.empty()) stk.push(s[j]);
            else {
                if (s[j] == stk.top()) stk.pop();
                else stk.push(s[j]);
            }
        }
        if (!stk.size()) answer++;
    }
    cout << answer << endl;
}
