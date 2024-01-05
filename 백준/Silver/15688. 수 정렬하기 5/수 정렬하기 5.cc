#include <iostream>
using namespace std;

int arr[2000001];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; 
	cin >> n;
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr[a+1000000]++;
	}
	for(int i = 0; i <= 2000000; i++) {
		// 개수저장 기준이므로 출력마다 -1을 통해 0으로 만들어 넘어가게끔
		while(arr[i]--) {
			cout << i - 1000000 << '\n';
		}
	}
}
