// #include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int n;
int board[3002][3002];
int cnt[3] = {0, 0, 0};

//같은 숫자인지 확인하는 함수
bool check(int n, int a, int b) {
	for(int i = a; i < n+a; i++) {
		for(int k = b; k < n+b; k++) {
			if(board[i][k] != board[a][b]) return false;
		}
	}
	return true;
}

//종이를 자르는 과정
void cut(int n, int a, int b) {
	if(check(n, a, b)) {
		cnt[board[a][b] + 1] += 1;
		return ;
	}
	int z = n/3;
	for(int i = 0; i < 3; i++) {
		for(int k = 0; k < 3; k++) cut(z, a + i * z, b + k * z);
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	//입력
	cin >> n;
	for(int i = 0; i < n; i++) {
		for(int k = 0; k < n; k++) cin >> board[i][k];
	}
	//재귀
	cut(n, 0, 0);
	//출력
	for(int i = 0; i < 3; i++) {
		cout << cnt[i] << '\n';
	}
}
