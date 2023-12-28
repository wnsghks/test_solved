#include <iostream>
#include <queue>
using namespace std;

int board[200002]; // 각 시작점 위치
int N = 0, K = 0; // 행과 열의 개수
int s = 0; // 걸린 시간

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);

  cin >> N >> K;
  queue<int> Q;
  board[N] = -2; // 수빈이 위치, -1은 찾은경우 0은 기록될 예정이므로 피해야하기 때문
  Q.push(N); // 수빈이 시작위치 기록

  // 이미 동생과 수빈이의 위치가 같을 경우
  if(N == K) {
    cout << s;
    return 0;
  }

  // 반복 탐색, 찾았을 경우 종료
  while(board[K] != -1) {
    int cur = Q.front(); Q.pop(); // 먼저 시작할 지점을 cur에 저장
    int dx[3] = {1, -1, cur}; // 이동 가능한 경우

    for(int dir = 0; dir < 3; dir++) {
      int nx = cur + dx[dir];
      if(nx < 0 || nx > 200000) continue;
      if(board[nx] != 0) continue; // 이미 계산된 자리이기 때문
      // 동생을 찾은 경우
      if(nx == K) {
        board[nx] = -1;
        if(board[cur] == -2) board[cur] = 0;
        s = board[cur] + 1;
        continue;
      }
      if(board[cur] == -2) board[cur] = 0;
      board[nx] = board[cur] + 1;
      Q.push(nx); // 다시 시작지점으로 만들어주고 재탐색
    }
  }

  // 출력
  cout << s;
}