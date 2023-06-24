#include<iostream>
#include<vector>

using namespace std;

vector<int> vec(16, 0);

// 규칙찾음 => 규칙 사진으로 정리

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int j=1, k=2, N;
  cin >> N;
  for (int i = 0; i <= 15; i++)
  {
    vec[i] = k*k;
    k += j;
    j *= 2;
  }
  cout << vec[N];

  return 0;
}
