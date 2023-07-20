#include <iostream>
#include <vector>

using namespace std;
int map[51][51]; //지도
int visit[51][51]; //방문
int w = 1, h = 1;

int dx[8] = { -1, 1, -1, 1, 0, 0, -1, 1 }; // 대각선 포함 위 아래 양 옆 x 좌표
int dy[8] = { -1, 1, 1, -1, 1, -1, 0, 0 }; // .. y 좌표

void dfs(int x, int y)
{
  visit[x][y] = true;
  for (int i = 0; i < 8; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx < 0 || ny < 0 || nx >= h || ny >= w) continue;
    if (!visit[nx][ny] && map[nx][ny]) dfs(nx, ny);
  }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  while (true) {
    int cnt = 0;
    cin >> w >> h;
    if (!w && !h) break;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        visit[i][j] = false;
        cin >> map[i][j];
      }
    }
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        // 방문을 안했는데 땅이 있을 때
        if (!visit[i][j] && map[i][j]) { 
          cnt++;
          dfs(i, j);
        }
      }
    }
    cout << cnt << "\n";
  }

  return 0;
}
