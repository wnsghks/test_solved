#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

int n;
vector<pair<int, int>> f;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for(int i = 0; i < n; i++) {
		int sm, sd, em, ed;
		cin >> sm >> sd >> em >> ed;
		f.push_back({(sm*100)+sd, (em*100)+ed});
	}
	sort(f.begin(), f.end()); // 피는날 순으로 정렬

	int cnt = 0;
	int st = 301; // 조건에 따른 3월1일
	while(st <= 1130) {
		int late = st; // 가장 늦게 지는 꽃을 찾기위한 변수
		for(int i = 0; i < n; i++) {
			if(f[i].first <= st && f[i].second > late)
				late = f[i].second; // 한개의 꽃을 심었으므로 시간 재설정
		}
		// 피는날과 지는날이 같을 경우 즉, 위에서 안걸려서 업데이트가 안된경우
		if(st == late) {
			cout << 0;
			return 0;
		}
		cnt += 1;
		st = late;
	}
	cout << cnt << '\n';

	return 0;
}
