#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;

unordered_set<string> s;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	while(n--) {
		string name, log;
		cin >> name >> log;
		if(log == "enter") s.insert(name);
		else s.erase(name);
	};
	vector<string> ans(s.begin(), s.end());
	sort(ans.begin(), ans.end());
	for(int i = ans.size()-1; i >= 0; i--) cout << ans[i] << '\n';

	return 0;
}
