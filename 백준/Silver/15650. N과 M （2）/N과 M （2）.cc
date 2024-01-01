#include <iostream>
using namespace std;

int n, m;
int arr[10];
bool check[10];

// 재귀 함수
void func(int k) {
	// 최소단위
	if(k == m) {
		for(int i = 0; i < m; i++) cout << arr[i] << ' ';
		cout << '\n';
		return ;
	}

	int st = 1;
	if(k != 0) st = arr[k-1] + 1;
	for(int i = st; i <= n; i++) {
		if(!check[i]) {
			arr[k] = i; // 배열저장
			check[i] = 1; // 사용 숫자의 여부
			func(k+1); // 재귀
			check[i] = 0; // 다시 사용여부 해제하고 처음부터 확인
		}
	}
}

// 실행 함수
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	func(0);
}