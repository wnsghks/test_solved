#include <iostream>
using namespace std;

int n; 
int d[15];

// 초기값을 설정해주고 점화식을 사용해 입력 값까지 최소값을 찾아가는 방식
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 0;
	d[1] = 1, d[2] = 2, d[3] = 4;
	for(int i = 4; i < 11; i++) {
		d[i] = d[i-1] + d[i-2] + d[i-3];
	}
	cin >> t;
	while(t--) {
		int n = 0;
		cin >> n;
		cout << d[n] << '\n';
	}

	return 0;
}
