#include <iostream>
#include <queue>
#include <utility>
using namespace std;

#define X first
#define Y second

int board[1002][1002]; // 문제입력 저장 판
int vis[1002][1002]; // 각 위치의 거리
int M = 0, N = 0; // 행과 열의 개수
int dx[4] = {1, 0, -1, 0}; // 뒤 계산에서 상하좌우 좌표를 구하기 위함
int dy[4] = {0, 1, 0, -1}; // --

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);

  cin >> M >> N;
  // 행과 열에 맞게 판 작성 및 시작점 모두 추가
	queue<pair<int, int>> Q;
  for(int i = 0; i < N; i++) {
    for(int k = 0; k < M; k++) {
      cin >> board[i][k];
      if(board[i][k] == 1) Q.push({i,k}); // 시작지점을 큐에 저장 
      else if(board[i][k] == 0) vis[i][k] = -1; // 익지않는 부분
    }
  }

  // 반복하며 상하좌우 탐색
  while(!Q.empty()) {
    pair<int, int> cur = Q.front(); Q.pop(); // 먼저 시작할 지점을 cur 좌표에 저장
    // x=행, y=열
    for(int dir = 0; dir < 4; dir++) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];
      // 이미 방문했거나 파란칸이 아닌경우를 거르는 작업
      if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
      if(vis[nx][ny] >= 0 || vis[nx][ny] == -2) continue;
      vis[nx][ny] = vis[cur.X][cur.Y] + 1; // 첫 방문 시 앞선 값에 + 1로 저장
      Q.push({nx,ny}); // 다시 시작지점으로 만들어주고 재탐색
    }
  }

  int sum = 0; // 총 걸리는 시간
  for(int i = 0; i < N; i++) {
    for(int k = 0; k < M; k++) {
      if(vis[i][k] == -1) {
        cout << -1;
        return 0;
      }
      else if(sum < vis[i][k]) sum = vis[i][k];
    }
  }
  // 출력
  cout << sum;
}