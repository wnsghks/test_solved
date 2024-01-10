#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int n;
pair<int,int> c[1000005]; // 회의 시간 저장배열

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	int s, e;
	for(int i = 0; i < n; i++) {
		cin >> c[i].second >> c[i].first; //sort는 앞에 수기준이기에 바꿔서 입력
	}

	sort(c, c+n);
	int cnt = 0; // 회의 숫자
	int t = 0;
	for(int i = 0; i < n; i++) {	
		if(c[i].second < t) continue;
		t = c[i].first; // 다음으로 업데이트
		cnt += 1;
	}
	cout << cnt << '\n';

	return 0;
}
