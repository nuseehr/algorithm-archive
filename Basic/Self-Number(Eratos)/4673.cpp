/*
 소수 = 1과 자신만을 약수로 가지는 수.
 -> X 배수가 될 수가 없음.
 
 2부터 증가하며 배수를 체크해 소수가 아닌 수를 제거한다.
 하지만 하나씩 체크하기엔 너무 시간이 오래걸린다.
 -> 에라토스테네스의 방법을 쓴다. (중복을 생각한다. '제곱'을 이용.)
 */


#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
int main(){
    int start, num;
    scanf("%d %d", &start, &num);
    vector<bool> prime(num+1, true);
 
    for (int i=2; i<=sqrt(num); i++) {
        if (prime[i]) {
            for (int j=i+i; j<=num; j+=i) {
                prime[j] = false;
            }
        }
    }
    
    for (int i=start; i<num+1; i++) {
        if (prime[i] == true) {
            printf("%d\n", i);
        }
    }
 
}
