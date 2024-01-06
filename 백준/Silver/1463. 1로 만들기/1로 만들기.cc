#include <iostream>
#include <algorithm>
using namespace std;

int n; 
int arr[1000002];

// 초기값을 설정해주고 점화식을 사용해 입력 값까지 최소값을 찾아가는 방식
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	arr[1] = 0; // 초기값 설정
	// 1이 초기값이기 때문에 i=2로 시작
	for(int i = 2; i <= n; i++) {
		arr[i] = arr[i-1]+1; // 1은 한번의 계산과정이 이루어지기 때문
		if(i % 2 == 0) arr[i] = min(arr[i], arr[i/2]+1);
		if(i % 3 == 0) arr[i] = min(arr[i], arr[i/3]+1);
	}
	cout << arr[n];
	
	return 0;
}
