#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int w[105];
int v[105]; 
int dp[105][100005];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	for(int i = 1; i <= n; i++) 
		cin >> w[i] >> v[i];

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= k; j++) {
			// 넣을수 있는 물건의 경우
			if(w[i] <= j) {
				// 물건이 첨등장한 무게의 값과 만약 무게가 남아 더할 수 있는 무게일때의 합과의 비교
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
			}
			else {
				dp[i][j] = dp[i-1][j]; 
			}
		}
	}

	cout << dp[n][k] << '\n';

	return 0;
}
