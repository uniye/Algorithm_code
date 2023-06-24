#include<iostream>

using namespace std;

// a/max*100 + b/max*100 => (a+b)/max*100 의 느낌

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N,max=0;
  double result=0;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    if (a > max) max = a;
    result += a;
  }
  result = (result / max * 100) / N;
  cout << result;
  return 0;
}
