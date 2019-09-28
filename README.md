D-day** **코딩테스트** **준비****.**



**1.** **완주하지** **못한** **선수** **문제****.**



​	C++ map 활용하기.

​	

​	vector<string> p;

​	vector<string> c; 이 주어진 상황.



​	(1) point. map의 선언과 vector의 요소를 간단하게 반복하는 것 확인.

​	map<string, int> m;

​	

​	for(auto e : p) m[e]++;

​	for(auto e : c) m[e]--;



​	

​	(2) point. iterator의 사용. map의 key와 value를 접근하는 법 확인.

​	

​	for(auto it = m.begin(); it != m.end(); it++) {

​		if(it -> second == 1) answer = it -> first;

​	}











**2.** **문자열** **내** **p****와** **y****의** **개수****. (****대소문자** **구분****X)**



​	auto for문 활용하기.

​	

​	string s = "pPoooyY";

​	int pCnt=0, yCnt=0;

​	

​	(1) point. auto for문을 통해 문자열 하나씩 접근이 가능하다.

​	for(auto e : s) {

​		if(e == 'y' || e == 'Y') yCnt++;

​		fif(e == 'p' || e == 'P') pCnt++;

​	}













**3.** **폰켓몬****.** **배열에서** **최대한** **많은** **종류의** **폰켓몬을** **가질** **수** **있는** **수****.**



​	vector<int> nums; 이 주어진 상황. n은 폰켓몬의 배열이다.

​	구하고자 하는 것은 nums의 배열에서 중복되지 않은 수를 고르는 것.

​	그 수의 갯수를 구하지만 또한 최대 n의 크기의 반 이상이 되지 않을 것.이다





​	int answer = 0;

​	int n = nums.size();

​	int hn = n/2;



​	

​	(1) point. 중복되지 않은 것을 담을 때 자료구조 set(집합)을 사용하자.



​	set<int> s;

​	

​	for(auto e : nums) s.insert(e);

​	

​	if(s.size() < hn) answer = s.size();

​	else answer = hn;



​	return answer;





**4.** **숫자게임****.**



​	vector 정렬 활용하기.



​	vector<int> A, vector<int> B 이 주어진 상황.



​	(1) point. vector 정렬을 활용하자.



​	오름차순 정렬:

​	sort(A.begin(), A.end())



​	내림차순 정렬:

​	sort(A.begin(), A.end(), greater<int>())



​	int i=0, j=0;

​	int n = A.size();

​	

​	↓



​	(2) point. 적절한 while문 조건 삽입.

​	while(i<n && j<n) {

​		if(A[i] < B[j]) {

​			i++;j++;

​			answer++;

​		}

​		else j++;

​	}









**5.**  **입력숫자를** **숫자** **큰** **순으로** **다시** **저장해서** **출력하기****. (47295 -> 97542)**





​	stringstream 이용. 숫자를 문자열로 바꾸는 것이 핵심. 

​	

​	long long n 이 주어진 상황.



​	vector<int> nums;

​	

​	(1) point. long long -> string 변환.



​	#include <sstream>

​	stringstream ss;

​	string str;

​	string result = "";

​	ss << n;

​	str = ss.str();



​	for(auto e: str) nums.push_back(e);



​	sort(nums.begin(), nums.end(), greater<int>());

​	

​	for(auto e: nums) result += e;



​	

​	(2) point. string -> long long 변환.

​	

​	istringstream iss(result);

​	iss >> answer;









**6.**  **소수만** **찾아서** **합** **구하기****.**





​	N이 주어지면 그 수까지 빠르게 소수들을 찾는 것이 핵심.

​	

​	(1) point. vector 초기화하는 방법.

​	vector<int>arr(num, 2);



​	(2) point. 배열에 차례대로 숫자를 넣음.

​	for(int i=2; i<num+1; i++) arr[i] = i;

​	

​	for(int i=2; i<num+1; i++) {

​		if(arr[i] == 0) continue;

​		for(int j=i+i; j<num+1; j+=i) arr[j] = 0;

​	}

​	

​	

​	for(int i=2; i<num+1; i++) 

​		if(arr[i] != 0) answer += arr[i];





**7.**  **문자열** **s****의** **길이가** **4** **혹은** **6****이고** **숫자로만** **구성되어** **있는지** **판단하기****.**





​	string 문자열을 다루는 방법. 

​	string s이 주어진 상황. 아스키코드를 통해 숫자인지 확인.

​	

​	(1) point. string의 길이는 length()이고 ASCII로 숫자인지 확인.

​	

​	if(s.length() != 4 && s.length() != 6) return false;

​    

​    	for(auto e: s) if( e < 48 || e > 57) return false;























**8.**  **전화번호** **목록****.**



​	substr를 이용하여 for문을 '한 번'만 돌기.

​	

​	vector<string> nums 이 주어진 상황.



​	(1) point. 접두사를 파악하기 위해 sort함수로 정렬부터 하자.



​	sort(nums.begin(), nums.end());





​	(2) point. 접두사는 제일 앞에 오므로 substr를 통해 접두사 파악하기.

​	for(int i=0; i<num.size(); i++) {

​		int len = nums[0].length();



​		if(nums[0] == nums[i].substr(0, len)) return false;

​	

​	}







**9.**  **타겟** **넘버****.**



​	유명한 DFS를 활용한 문제.

​	숫자 배열 nums = [1, 1, 1, 1, 1], target = 3 이 주어진 상황.



​	void dfs(vector<int> &nums, int &target, int sum, int i) {

​		if(i >= nums.size()) {

​			if(sum == target) cnt++;

​			return;

​		}

​	

​	dfs(nums, target, sum+nums[i], i+1);

​	dfs(nums, target, sum-nums[i], i+1);



​	}



​	int solution(vector<int> numbers, int target) {

​		int answer = 0;

​		dfs(numbers, target, numbers[0], 1);

​		dfs(numbers, target, -numbers[0], 1);

​		answer = cnt;

​		return answer;

​	}