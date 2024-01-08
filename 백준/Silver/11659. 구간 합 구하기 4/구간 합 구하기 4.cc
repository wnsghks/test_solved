#include <iostream>
using namespace std;

int n, m;
int d[1000002];
int v[1000002];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	d[0] = 0;
	for(int i = 1; i <= n; i++) {
		cin >> v[i]; 
		d[i] = d[i-1] + v[i];
	}

	for(int k = 1; k <= m; k++) {
		int i, j;
		cin >> i >> j;
		cout << d[j] - d[i-1] << '\n';
	}

	return 0;
}
