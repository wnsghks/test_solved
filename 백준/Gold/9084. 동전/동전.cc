#include <iostream>
#include <algorithm>
using namespace std;

int t, n, m;
int coin[30]; // 코인 개수
int D[10005]; // i를 만들수 있는 모든 경우의 수

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;
	
	while(t--) {
		// 새로운 시도마다 초기화
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> coin[i];
		cin >> m;
		fill(D, D+10005, 0);
		D[0] = 1;
		for(int i = 1; i <= n; i++)
			for(int j = coin[i]; j <= m; j++) 
				D[j] += D[j-coin[i]]; 

		cout << D[m] << '\n';
	}

	return 0;
}
