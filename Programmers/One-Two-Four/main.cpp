/*
 
 프로그래머스 - 124 나라의 숫자.
 
 */
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(int n) {
    string answer = "";
    int tmp = 0;
    string s = "412";

    while (n > 0) {
        tmp = n % 3;
        if (tmp == 0) n = (n / 3) - 1;
        else n /= 3;

        answer = s[tmp] + answer;
    }

    retur
