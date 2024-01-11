#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int p[1005];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for(int i = 0; i < n; i++) 
		cin >> p[i];
	sort(p, p + n);
	int ans = 0;
	for(int i = 0; i < n; i++) {
		ans += p[i]* (n-i);
	}

	cout << ans << '\n';

	return 0;
}
