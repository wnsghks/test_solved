#include <iostream>
using namespace std;

int n;
int board[6600][6600];

// 별채우는 함수
void star(int n, int a, int b) {
	if(n == 1) {
		board[a][b] = 1;
		return ;
	}

	int z = n / 3;
	for(int i = 0; i < 3; i++) {
		for(int k = 0; k < 3; k++) {
			if(i == 1 && k == 1) continue; // 가운데부분 비어있게 만들기
			star(z, a + i * z, b + k * z);
		}
	}
}

// 실행 함수
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	star(n, 0, 0);
	// 출력
	for(int i = 0; i < n; i++) {
		for(int k = 0; k < n; k++) {
			if(board[i][k] == 1) cout << "*";
			else cout << " ";
		}
		cout << '\n';
	}
}