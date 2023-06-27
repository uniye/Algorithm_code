#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<string>vec, vec1;

//이분탐색 사용 => 시간 단축의 결과

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  
  int N,M;
  string s;
  cin >> N >> M;
  for (int i = 0; i < N; i++) {
    cin >> s;
    vec.push_back(s);
  }
  sort(vec.begin(), vec.end());

  for (int i = 0; i < M; i++) {
    cin >> s;
    if (binary_search(vec.begin(), vec.end(), s)) {
      vec1.push_back(s);
    }
  }
  sort(vec1.begin(), vec1.end());

  cout << vec1.size() << "\n";
  for (int i = 0; i < vec1.size(); i++)
  {
    cout << vec1[i] << "\n";
  }
}
