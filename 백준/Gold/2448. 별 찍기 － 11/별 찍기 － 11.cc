#include <iostream>
using namespace std;

int n;
int board[3300][6600];

// 별채우는 함수
void star(int n, int a, int b) {
	// 최소단위
	if(n == 3) {
		board[a][b] = 1;
		board[a+1][b-1] = 1, board[a+1][b+1] = 1;
		for(int i = b-2; i <= b+2; i++) board[a+2][i] = 1;
		return ;
	}

	int z = n / 2;
	star(z, a, b);
	star(z, a + z, b - z);
	star(z, a + z, b + z);
}

// 실행 함수
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	star(n, 0, n-1);
	// 출력
	for(int i = 0; i < n; i++) {
		for(int k = 0; k < n*2-1; k++) {
			if(board[i][k] == 1) cout << "*";
			else cout << " ";
		}
		cout << '\n';
	}
}