#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int a[100002];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n);

	int st = 0, en = 0;
	int mn = 0x7f7f7f7f;
	while(en != n) {
		int dis = a[en]-a[st];
		if(dis < m && en != n) en += 1;
		else {
			mn = min(mn, dis);
			st += 1;
		}
	}
	cout << mn << '\n';

	return 0;
}
