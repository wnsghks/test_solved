#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int n, m; // 도시판 크기, 치킨집 사용 개수
int city[55][55]; // 도시 저장 변수
int dis[105]; // 거리차이 저장 변수
int mn = 0x7f7f7f7f; // 거리 최소값구하기 위한 비교 변수
int ans; // 정답
vector<pair<int, int>> house; // 집 저장 변수
vector<pair<int, int>> ch; // 치킨집 저장할 변수

// 집과 치킨집 사이 거리 최소값 계산 함수
void cal(int chx, int chy) {
	int sum = 0;
	for(int i = 0; i < house.size(); i++) {
		int sumX = 0; // 치킨집과 집의 x 계산값
		int sumY = 0; // 치킨집과 집의 y 계산값
		int hx = house[i].first; // 집의 x좌표
		int hy = house[i].second; // 집의 y좌표
		
		// 부호에 따른 계산
		if(hx > chx) sumX = hx - chx;
		else sumX = chx - hx;
		if(hy > chy) sumY = hy - chy;
		else sumY = chy - hy;
		sum = sumX + sumY;
		if(dis[i] == 0 || dis[i] > sum) dis[i] = sum;
	}
	// 총합 계산 후 작으면 갱신
	int tmp = 0;
	for(int i = 0; i < house.size(); i++) tmp += dis[i];
	if(ans == 0 || ans > tmp) ans = tmp;
	
	return ;
}

// m개 만큼의 치킨 집선택 함수
void destroy() {
	vector<int> choose(ch.size(), 1); // 순열을 사용하기 위해선 오름차순이어야함.
	fill(choose.begin(), choose.begin() + ch.size() - m, 0); // m개 만큼 0으로 채움
	do {
		// 거리 값 초기화
		for(int i = 0; i < house.size(); i++)
			dis[i] = 0;
		// 각 집에 대한 거리 계산
		for(int i = 0; i < choose.size(); i++) {
			if(choose[i] == 0) continue;
			int x = ch[i].first; // 치킨집의 x좌표
			int y = ch[i].second; // 치킨집의 y좌표
			cal(x, y);
			x = 0, y = 0; // 초기화
		}
	} while(next_permutation(choose.begin(), choose.end()));
	return ;
}

// 실행 및 출력 함수
int main(void) { 
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	// 도시 좌표 저장
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> city[i][j];
			// 치킨집 좌표 저장
			if(city[i][j] == 2) ch.push_back({i, j});
			// 집 좌표 저장
			if(city[i][j] == 1) house.push_back({i, j});
		}
	}
	destroy();

	
	cout << ans << '\n';

	return 0;
}