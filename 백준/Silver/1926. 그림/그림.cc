#include <iostream>
#include <queue>
#include <utility>
using namespace std;

#define X first
#define Y second

int board[502][502]; // 1이면 파란칸, 0이면 빨간칸
bool vis[502][502]; // 방문여부
int n = 0, m = 0; // 행과 열의 개수
int dx[4] = {1, 0, -1, 0}; // 뒤 계산에서 상하좌우 좌표를 구하기 위함
int dy[4] = {0, 1, 0, -1}; // --

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);

  // 행과 열에 맞게 판 작성
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    for(int k = 0; k < m; k++) cin >> board[i][k];
  }

  // 이중 for문을 통해 시작지점을 탐색한다.
  int max = 0, sum = 0; // 가장 큰 값 비교
  int count = 0; // 그림의 개수
	queue<pair<int, int>> Q;
  for(int i = 0; i < n; i++) {
    for(int k = 0; k < m; k++) {
      // 1이 아니거나 이미 방문한적이 있을경우 시작지점에서 제외한다.
      if(board[i][k] == 0) continue;
      else if(board[i][k] == 1 && vis[i][k] == 1) continue;
      else if(board[i][k] == 1 && vis[i][k] == 0) {
        vis[i][k] = 1; // 시작지점
        sum += 1; // 합계 1로 시작
        Q.push({i,k}); // 시작지점을 큐에 저장, 다음탐색을 위해

        // 반복하며 상하좌우 탐색
        while(!Q.empty()) {
          pair<int, int> cur = Q.front(); Q.pop(); // 먼저 시작할 지점을 cur 좌표에 저장
          // x=행, y=열
          for(int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            // 이미 방문했거나 파란칸이 아닌경우를 거르는 작업
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(vis[nx][ny] || board[nx][ny] != 1) continue;
            vis[nx][ny] = 1; // 첫 방문 시 1로 저장
            sum += 1;
            Q.push({nx,ny}); // 다시 시작지점으로 만들어주고 탐색
          }
        }

        // 연속된 1의 값과 최고값 비교
        if (max < sum) max = sum;
        sum = 0;
      }

      // 그림의 개수
      count += 1;
    }
  }

  // 출력
  cout << count << '\n';
  cout << max;
}