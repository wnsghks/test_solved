#include <iostream>
#include <algorithm>
using namespace std;

int n, sum;
unsigned int s;
int cnt = 0;
int num[22];

// 재귀 함수
void func(int cur, int sum) {
	// 최소단위
	if(cur == n) {
		if(sum == s) cnt++;
		return;
	}
	
	func(cur+1, sum); // 더하지 않는 경우
	func(cur+1, sum+num[cur]); // 더하는 경우
}

// 실행 함수
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> s;
	for(int i = 0; i < n; i++) cin >> num[i];
	func(0, 0);
	if(s == 0) cnt--;
	cout << cnt;
}