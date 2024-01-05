#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;

vector<long long> arr;
int n; 
int cnt = 0; // 몇번 나왔는지
int mxCnt = 0; // 현재 최고 개수
long long mxNum = -(1ll<<62) - 1; // 최고 개수의 적혀있는 수

void check() {
	for(int i = 0; i < n; i++) {
		if(i == 0 || arr[i-1] == arr[i])
			cnt += 1; // 시작부분과 앞과 뒤가 같을 때 증가
		// 개수가 더 많은 경우
		else {
			if(cnt > mxCnt) {
				mxCnt = cnt; // 많이 나온 횟수로 대체
				mxNum = arr[i-1];
			}
			// 개수가 같은 경우
			if(cnt == mxCnt) {
				if(mxNum > arr[i]) mxNum = arr[i];
			}
			cnt = 1; // 개수 초기화
		}
	}
	if(cnt > mxCnt) mxNum = arr[n-1]; // 마지막줄 처리

	cout << mxNum << '\n';
	return ;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for(int i = 0; i < n; i++) {
		long long num = 0;
		cin >> num;
		arr.push_back(num);
	}
	sort(arr.begin(), arr.end());

	check();
	return 0;
}
