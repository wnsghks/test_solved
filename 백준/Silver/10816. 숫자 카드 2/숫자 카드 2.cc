#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int comp[500002];
int st, en, mid;

// 수의 시작지점을 구하는 함수
int stPoint(int t) {
	st = 0, en = n;
	while(st != en) {
		mid = (st+en)/2;
		if(comp[mid] < t)
			st = mid + 1;
		else
			en = mid;
	}
	
	return st;
}

// 수의 끝지점을 구하는 함수
int enPoint(int t) {
	st = 0, en = n;
	while(st != en) {
		mid = (st+en)/2;
		if(comp[mid] <= t)
			st = mid+1;
		else
			en = mid;
	}
	
	return st;
}

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
		cout << enPoint(t)-stPoint(t) << ' ';
	}

	return 0;
}
