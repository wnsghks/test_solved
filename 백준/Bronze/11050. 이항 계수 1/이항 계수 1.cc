#include <iostream>
using namespace std;

int n, k;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	int m = 1;
	for(int i = n; i > (n-k); i--)
		m *= i;
	for(int i = k; i > 1; i--) 
		m /= i;
	cout << m << '\n';

	return 0;
}
