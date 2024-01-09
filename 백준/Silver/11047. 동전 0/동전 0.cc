#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int coin[20]; // 코인 종류

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> coin[i];

	int cnt = 0; // 사용된 동전 개수
	int cur = k; // 현재남은 잔돈 값
	for(int i = n-1; i >= 0; i--) {
		if(cur == 0) break;
		if(cur/coin[i] > 0) {
			cnt += cur/coin[i]; // 동전 개수 몫만큼 더하기
			cur -= (cur/coin[i]) * coin[i]; // 남은 값 계산
		}
	}

	cout << cnt << '\n';

	return 0;
}
