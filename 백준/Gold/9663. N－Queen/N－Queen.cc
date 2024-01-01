#include <iostream>
#include <algorithm>
using namespace std;

int n;
int cnt = 0;
bool board[40]; //같은 열인지
bool board2[40]; // /방향 대각석
bool board3[40]; // \방향 대각선

// 재귀 함수
void func(int x) {
	// 최소단위
	if(x == n) {
		cnt++;
		return;
	}
	
	for(int i = 0; i < n; i++) {
		if(board[i] || board2[i+x] || board3[x-i+n-1]) continue;
			board[i] = 1;
			board2[i+x] = 1;
			board3[x-i+n-1] = 1;
			func(x+1);
			board[i] = 0;
			board2[i+x] = 0;
			board3[x-i+n-1] = 0;
	}
}

// 실행 함수
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	func(0);
	cout << cnt;
}