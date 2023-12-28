#include <iostream>
#include <queue>
#include <utility>
using namespace std;

#define X first
#define Y second

char board[1002][1002]; // 문제입력 저장 판
int fire[1002][1002]; // 각 위치의 거리[불]
int per[1002][1002]; // 각 위치의 거리[사람]
int R= 0, C = 0; // 행과 열의 개수
int dx[4] = {1, 0, -1, 0}; // 뒤 계산에서 상하좌우 좌표를 구하기 위함
int dy[4] = {0, 1, 0, -1}; // --

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);

  cin >> R >> C;
  // 행과 열에 맞게 판 작성 및 시작점 모두 추가
	queue<pair<int, int>> Q1; // 불
  queue<pair<int, int>> Q2; // 사람
  for(int i = 0; i < R; i++) {
    for(int k = 0; k < C; k++) {
      cin >> board[i][k];
      if(board[i][k] == 'F') Q1.push({i,k}); // 불의 시작지점을 큐에 저장 
      else if(board[i][k] == 'J') {
        Q2.push({i,k}); // 사람의 시작지점을 큐에 저장 
        fire[i][k] = -1; // 지나갈수 있는 공간이란 뜻
      }
      else if (board[i][k] == '.') {
        fire[i][k] = -1;
        per[i][k] = -1;
      }
    }
  }

  // 반복하며 상하좌우 탐색[불]
  while(!Q1.empty()) {
    pair<int, int> cur = Q1.front(); Q1.pop(); // 먼저 시작할 지점을 cur 좌표에 저장
    // x=행, y=열
    for(int dir = 0; dir < 4; dir++) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];
      if(nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
      if(fire[nx][ny] >= 0 || board[nx][ny] == '#') continue;
      fire[nx][ny] = fire[cur.X][cur.Y] + 1; // 첫 방문 시 앞선 값에 + 1로 저장
      Q1.push({nx,ny}); // 다시 시작지점으로 만들어주고 재탐색
    }
  }

  // 반복하며 상하좌우 탐색[사람]
  while(!Q2.empty()) {
    pair<int, int> cur = Q2.front(); Q2.pop(); // 먼저 시작할 지점을 cur 좌표에 저장
    // x=행, y=열
    for(int dir = 0; dir < 4; dir++) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];
      // 범위에 벗어나면 탈출이므로 출력
      if(nx < 0 || nx >= R || ny < 0 || ny >= C) {
        cout << per[cur.X][cur.Y] + 1;
        return 0;
      }
      if(per[nx][ny] >= 0 || board[nx][ny] == '#') continue;
      per[nx][ny] = per[cur.X][cur.Y] + 1; // 첫 방문 시 앞선 값에 + 1로 저장
      // 불에 의해 못 지나가는 곳
      if(per[nx][ny] >= fire[nx][ny] && fire[nx][ny] > 0) {
        per[nx][ny] = 0;
        continue;
      }
      Q2.push({nx,ny}); // 다시 시작지점으로 만들어주고 재탐색
    }
  }

  // 탈출못했을 시 출력
  cout << "IMPOSSIBLE";
}