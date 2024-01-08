#include <iostream>
using namespace std;

int n;
int d[1000002];
int pre[1000002];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	d[1] = 0;
	for(int i = 2; i <= n; i++) { 
		d[i] = d[i-1] + 1;
		pre[i] = i - 1; // -1의 경우
		if(i % 2 == 0 && d[i] > d[i/2] + 1) {
			d[i] = d[i/2] + 1;
			pre[i] = i/2;
		}
		if(i % 3 == 0 && d[i] > d[i/3] + 1) {
			d[i] = d[i/3] + 1;
			pre[i] = i/3;
		}
	}
	cout << d[n] << '\n';
	
	int copy = n;
	while(1) {
		cout << copy << ' ';
		if(copy == 1) break;
		copy = pre[copy];
	}

	return 0;
}
