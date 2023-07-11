#include<iostream>
#include<vector>
using namespace std;

vector<int> vec;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  vec.emplace_back(0);
  vec.emplace_back(1);
  vec.emplace_back(1);
  for (int i = 3; i < 21; i++)
  {
    vec.emplace_back(vec[i-2]+vec[i-1]);
  }
  int n;
  cin >> n;
  cout << vec[n];

  return 0;
}
