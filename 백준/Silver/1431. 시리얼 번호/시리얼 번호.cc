#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

string arr[55];

bool comp(const string& x, const string& y) {
	int xLen = x.size(), yLen = y.size();
	if(xLen != yLen) return xLen < yLen; // 긴 것이 뒤로 배치되게끔
	// 위에서 길이가 다를 때 계산 했으므로 아래계산에는 같은 길이 
	int sumX = 0;
	int sumY = 0;
	for(int i = 0; i < xLen; i++) {
		if(isdigit(x[i])) sumX += (x[i] - '0'); // 숫자라면 더하기
		if(isdigit(y[i])) sumY += (y[i] - '0'); // 아스키 값이므로 고려
	}
	if(sumX != sumY) return sumX < sumY; // 합이 큰게 뒤로
	return x < y; // 사전순으로 출력
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; 
	cin >> n;
	for(int i = 0; i < n; i++) {
		string a;
		cin >> a;
		arr[i] = a;
	}
	sort(arr, arr+n, comp);
	for(int i = 0; i < n; i++) {
		cout << arr[i] << '\n';
	}

	return 0;
}
