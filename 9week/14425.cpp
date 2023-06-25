#include<iostream>
#include<map>
#include<string>

using namespace std;

map<string,bool> m;

//map 사용하여 키가 true이면 답에 +1하는 형식

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  cin >> N >> M;
  string s;
  for (int i = 0; i < N; i++)
  {
    cin >> s;
    m[s] = true;
  }
  int cnt = 0 ;
  for (int i = 0; i < M; i++)
  {
    cin >> s;
    if (m[s]) cnt++;
  }

  cout << cnt;

  return 0;
}
