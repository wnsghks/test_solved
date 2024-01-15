#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int a[1000002];
int dup[1000002], dup2[1000002];

// 정렬 및 중복제거하여 복사한 새로운 배열
int co(int idx) {
	dup2[0] = dup[0]; // 첫번째자리는 중복경우 없으니 무조건 저장
	for(int i = 1; i < n; i++) {
		if(dup[i-1] == dup[i])
			continue; 
		dup2[idx] = dup[i];
		idx++;
	}

	return idx;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		dup[i] = a[i];
	}
	sort(dup, dup+n);
	int len = co(1);

	for(int i = 0; i < n; i++) {
		cout << lower_bound(dup2, dup2+len, a[i])-dup2 << ' ';
	}

	return 0;
}
