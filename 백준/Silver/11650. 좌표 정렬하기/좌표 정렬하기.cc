#include <iostream>
#include <algorithm>
using namespace std;

struct s {
	int x, y;
};

int n;
s arr[100002];

bool comp(s cur, s nx) {
	if(cur.x == nx.x) return cur.y < nx.y;
	else return cur.x < nx.x;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i].x >> arr[i].y;
	sort(arr, arr+n, comp);
	for(int i = 0; i < n; i++)
		cout << arr[i].x << ' ' << arr[i].y << '\n';
}