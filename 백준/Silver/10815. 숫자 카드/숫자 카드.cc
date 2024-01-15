#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int comp[500002];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for(int i = 0; i < n; i++) cin >> comp[i];
	sort(comp, comp+n);

	cin >> m;
	while(m--) {
		int t = 0;
		cin >> t;
		cout << binary_search(comp, comp+n, t) << ' ';
	}

	return 0;
}
