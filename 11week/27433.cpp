#include<iostream>
using namespace std;

long long factorial(long long a) {
  if (a == 1) return a;
  else if (a == 0) return 1;
  return a * factorial(a-1);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long a;
  cin >> a;

  long long result = factorial(a);

  cout << result;

  return 0;
}
