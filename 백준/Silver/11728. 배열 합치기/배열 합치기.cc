#include <iostream>
using namespace std;

int n, m;
int arr1[1000002], arr2[1000002], sum[2000005];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for(int i = 0; i < n; i++) cin >> arr1[i];
	for(int i = 0; i < m; i++) cin >> arr2[i];

	int a = 0, b = 0;
	for(int i = 0; i < n+m; i++) {
		if(a == n) sum[i] = arr2[b++];
		else if(b == m) sum[i] = arr1[a++];
		else if(arr1[a] < arr2[b]) {
			sum[i] = arr1[a];
			a++;
		}
		else sum[i] = arr2[b++];
	}

	for(int i = 0; i < n+m; i++) {
		cout << sum[i] << ' ';
	}


	return 0;
}
