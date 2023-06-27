#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

map<string, int> m; //이름이 key 언급되는 횟수가 value
vector<string> vec;

// find는 쓰지 않도록 하자. => 시간초과가 그 이유

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  cin >> N >> M;

  string name;
  for (int i = 0; i < N+M; i++) {
    cin >> name;
    m[name]++;
    if (m[name] > 1)
      vec.push_back(name);
  }
  sort(vec.begin(),vec.end());
  cout << vec.size() << "\n";
  for (int i = 0; i < vec.size(); i++)
  {
    cout << vec[i] << '\n';
  }


  return 0;
}
