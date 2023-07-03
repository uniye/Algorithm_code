#include<iostream>

using namespace std;

// 제곱수! = 열고 닫은 횟수가 홀수번이어야함.약수 개수가 홀수임.

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, count = 0;
  cin >> N;

  for (int i = 1; i * i <= N; ++i) count++;
  cout << count;

  return 0;
}
