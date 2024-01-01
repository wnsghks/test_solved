#include <iostream>
using namespace std;

int n, m;
int arr[10];

// 재귀 함수
void func(int k) {
	// 최소단위
	if(k == m) {
		for(int i = 0; i < m; i++) cout << arr[i] << ' ';
		cout << '\n';
		return ;
	}

	for(int i = 1; i <= n; i++) {
		arr[k] = i; // 배열저장
		func(k+1); // 재귀
	}
}

// 실행 함수
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	func(0);
}