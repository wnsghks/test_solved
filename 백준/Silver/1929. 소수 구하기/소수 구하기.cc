#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int m, n;
vector<bool> ch(1000002, true);

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> m >> n;
	ch[1] = false; // 1은 소수가 아니기 때문
	for(int i = 2; i*i <= n; i++) {
		if(!ch[i]) continue;
		for(int j = i*i; j <= n; j += i) ch[j] = false;
	}

	for(int i = m; i <= n; i++)
		if(ch[i]) cout << i << '\n';
	
	return 0;
}
