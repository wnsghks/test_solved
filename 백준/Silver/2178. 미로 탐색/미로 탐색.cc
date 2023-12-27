#include <iostream>
#include <queue>
#include <utility>
using namespace std;

#define X first
#define Y second

string board[102]; // 문제입력 저장 판
int vis[102][102]; // 각 위치의 거리
int n = 0, m = 0; // 행과 열의 개수
int dx[4] = {1, 0, -1, 0}; // 뒤 계산에서 상하좌우 좌표를 구하기 위함
int dy[4] = {0, 1, 0, -1}; // --

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);

  // 행과 열에 맞게 판 작성
  cin >> n >> m;
  for(int i = 0; i < n; i++) cin >> board[i];
  
	queue<pair<int, int>> Q;
  vis[0][0] = 1; // 시작지점
  Q.push({0,0}); // 시작지점을 큐에 저장, 다음탐색을 위해

  // 반복하며 상하좌우 탐색
  while(!Q.empty()) {
    pair<int, int> cur = Q.front(); Q.pop(); // 먼저 시작할 지점을 cur 좌표에 저장
    // x=행, y=열
    for(int dir = 0; dir < 4; dir++) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];
      // 이미 방문했거나 파란칸이 아닌경우를 거르는 작업
      if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
      if(vis[nx][ny] || board[nx][ny] != '1') continue;
      vis[nx][ny] = vis[cur.X][cur.Y] + 1; // 첫 방문 시 앞선 값에 + 1로 저장
      Q.push({nx,ny}); // 다시 시작지점으로 만들어주고 재탐색
    }
  }

  // 출력
  cout << vis[n - 1][m - 1];
}