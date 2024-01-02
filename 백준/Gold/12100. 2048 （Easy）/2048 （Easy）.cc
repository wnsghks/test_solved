#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int n; // 보드의 크기
int board1[22][22]; // 원본 보드의 크기
int board2[22][22]; // 복사 보드의 크기

void rotate() {
	int tmp[22][22];
  	for(int i = 0; i < n; i++)
    	for(int j = 0; j < n; j++)
      	tmp[i][j] = board2[i][j];
  	for(int i = 0; i < n; i++)
   	 	for(int j = 0; j < n; j++)
    	  board2[i][j] = tmp[n-1-j][i];
}

// 보드를 기울여 숫자가 합쳐지는 함수
void tilt(int dir) {
	while(dir--) rotate();
	for(int i = 0; i < n; i++) {
		int tmp[22] = {0,}; // 기울인 결과를 저장할 변수(한줄씩 반복이므로 1차원 배열 충분)
		int idx = 0; // tmp배열에 어디에 삽입해야하는지 알려주는 변수
		for(int j = 0; j < n; j++) {
			if(board2[i][j] == 0) continue;
			if(tmp[idx] == 0) tmp[idx] = board2[i][j];	
			// 같은 값일 경우 곱
			else if(tmp[idx] == board2[i][j]) {
				tmp[idx] *= 2;
				idx++;
			}
			// 다른 경우 다음 인덱스에 삽입
			else {
				idx++;
				tmp[idx] = board2[i][j];
			}
		}
		// 완료후 새로운 한줄로 board2[i]에 tmp를 덮어씀.
		for(int j = 0; j < n; j++) board2[i][j] = tmp[j];
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> board1[i][j];
		}
	}

	int mx = 0;
	// 최대 1024이기 때문에 0~1023까지 돌아야한다.
	for(int tmp = 0; tmp < 1024; tmp++) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++)
				board2[i][j] = board1[i][j];
		}
		int num = tmp;
		for(int i = 0; i < 5; i++) {
			int dir = num % 4;
			num /= 4;
			tilt(dir);
		}
		for(int i = 0; i < n; i++) 
			for(int j = 0; j < n; j++)
				mx = max(mx, board2[i][j]);
	}
	cout << mx;

	return 0;
}