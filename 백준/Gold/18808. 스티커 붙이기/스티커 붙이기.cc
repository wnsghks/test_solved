#include <iostream>
#include <algorithm>
using namespace std;

int n, m, k; // 노트북 크기 및 색종이 개수
int r, c; // 색종이 크기
bool note[42][42]; // 노트북의 크기
bool paper[12][12]; // 색종이 하나의 크기

// 색종이를 90도씩 돌리는 함수
void rotate() {
	bool tmp[12][12] = {0,};

	// 임시값에 복사
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) 
			tmp[i][j] = paper[i][j];
	}
	// 돌린 값 저장
	for(int i = 0; i < c; i++) {
		for(int j = 0; j < r; j++) 
			paper[i][j] = tmp[r-1-j][i];
	}
	swap(r, c);
}

// 색종이가 들어갈 수 있는지 판단하는 함수
bool check(int x, int y) {
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			// 노트북과 색종이의 1이 서로 겹칠 경우 못 붙이므로 종료
			if(note[x+i][y+j] == 1 && paper[i][j] == 1) return false;
		}
	}
	return true;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> k;
	// k개 색종이 입력 및 비교
	for(int cnt = 0; cnt < k; cnt++) {
		// 색종이 값 입력
		cin >> r >> c;
		for(int i = 0; i < r; i++) {
			for(int j = 0; j < c; j++)
				cin >> paper[i][j];
		}

		// 색종이를 4번 돌린 값과 비교
		for(int rot = 0; rot < 4; rot++) {
			bool isUsed = false;
			// 노트북 안에서 색종이 크기만큼 여러번 확인
			for(int x = 0; x <= n-r; x++) {
				if(isUsed) break; // 이미 붙여졌을 경우 종료
				for(int y = 0; y <= m-c; y++) {
					// 노트북과 비교 true반환시 값 그대로 저장
					if(check(x, y)) {
						isUsed = true;
						for(int i = 0; i < r; i++) {
							for(int j = 0; j < c; j++) {
								if(paper[i][j]) note[x+i][y+j] = 1; // 색종이가 1일 때 노트북도 1로 바꾸기
							}
						}
						break;
					}
				}
			}
			if(isUsed) break; // 이미 붙여졌을 경우 종료
			rotate(); // 아닌경우 돌리고 다시 재시작
		}
	}

	int num = 0; // 색종이가 붙은 즉, 1의 개수
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) 
			if(note[i][j]) num++;
	}
	cout << num << '\n';

	return 0;
}