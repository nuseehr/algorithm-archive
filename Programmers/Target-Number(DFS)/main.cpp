/*
 
 프로그래머스 - 타겟 넘버.
 
 */
#include <string>
#include <vector>

using namespace std;

int cnt=0;

void dfs(vector<int> &nums, int &target, int sum, int i) {
    if(i>=nums.size()) {
        if(sum == target) cnt++;
        return;
    }
    dfs(nums, target, sum+nums[i], i+1);
    dfs(nums, target, sum-nums[i], i+1);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    dfs(numbers, target, numbers[0], 1);
    dfs(numbers, target, -numbers[0], 1);
    answer = cnt;
    return answer;
}
