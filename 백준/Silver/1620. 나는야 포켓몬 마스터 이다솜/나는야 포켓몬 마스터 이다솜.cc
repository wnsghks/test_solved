#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <cctype>
#include <string>
using namespace std;

unordered_map<string, int> s;
vector<string> v;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	// 도감에 저장
	int num = 1;
	while(n--) {
		string name;
		cin >> name;
		s[name] = num;
		v.push_back(name);
		num++;
	};

	// 출력
	while(m--) {
		string val;
		cin >> val;
		// char타입을 검사하므로 string은 앞글자만 확인
		if(isdigit(val[0])) 
			cout << v[stoi(val)-1] << '\n'; // stoi 11부터 생긴기능으로 string->int
		else
			cout << s[val] << '\n';
	};

	return 0;
}
