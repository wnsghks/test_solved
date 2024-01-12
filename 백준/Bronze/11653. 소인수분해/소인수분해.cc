#include <iostream>
using namespace std;

int n;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for(int i = 2; i*i <= n; i++) {
		if(n == 1) break ;
		while(n % i == 0) {
			cout << i << '\n';
			n = n/i;
		}
	}
	if(n != 1) cout << n << '\n';

	return 0;
}
