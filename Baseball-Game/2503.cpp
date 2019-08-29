#include <iostream>
#include <string>

using namespace std;

int base[100][3] = {0, };

bool isValid(int num) {
    string str = to_string(num);
    if (str[0] == str[1] || str[0] == str[2] || str[1] == str[2]) return false;
    else if (str.find('0') != string::npos) return false;
    else return true;
}

bool baseball(int num, int N) {
    string target = to_string(num);
    string guess = to_string(base[N][0]);
    int s_cnt=0, b_cnt=0;
    
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (i == j && target[i] == guess[j]) s_cnt++;
            else if (i != j && target[i] == guess[j]) b_cnt++;
        }
    }
    
    if (base[N][1] == s_cnt && base[N][2] == b_cnt) return true;
    return false;
}

int main() {

    int answer = 0;
    int N;
    cin >> N;
    
    for (int i=0; i<N; i++) {
        cin >> base[i][0] >> base[i][1] >> base[i][2];
    }
        
    for (int i=123; i<=987; i++) {
        if (!isValid(i)) continue;
        for (int j=0; j<N; j++) {
            if (!baseball(i, j)) break;
            if (j == N-1) answer++;
        }
    }
    
    cout << answer << endl;
}
