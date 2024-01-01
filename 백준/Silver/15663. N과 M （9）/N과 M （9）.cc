#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int num[10]; // 지정된 숫자들
int arr[10];
bool isNum[10];

// 재귀 함수
void func(int k) {
	// 최소단위
	if(k == m) {
		for(int i = 0; i < m; i++) cout << arr[i] << ' ';
		cout << '\n';
		return ;
	}
 
	int check = 0;
	for(int i = 0; i < n; i++) {
		if(!isNum[i] && check != num[i]) {
			arr[k] = num[i]; // 배열저장
			check = arr[k];
			isNum[i] = 1; 
			func(k+1); // 재귀
			isNum[i] = 0;
		}
	}
}

// 실행 함수
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	// 숫자들 입력받기
	for(int i = 0; i < n; i++) cin >> num[i];
	sort(num, num+n); // 오름차순 정렬
	func(0);
}