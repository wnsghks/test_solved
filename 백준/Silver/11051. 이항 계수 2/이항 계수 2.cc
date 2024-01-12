#include <iostream>
using namespace std;

int n, k;
int comb[1002][1002];
int mod = 10007;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	for(int i = 1; i <= 1000; i++) {
		comb[i][0] = comb[i][i] = 1; // 5C1 = 5C5 = 1;
		for(int j = 1; j < i; j++) 
			comb[i][j] = (comb[i-1][j] + comb[i-1][j-1]) % mod;
	}
	cout << comb[n][k] << '\n';

	return 0;
}
