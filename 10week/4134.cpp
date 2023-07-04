#include<iostream>
#include<cmath>

using namespace std;

// O(N) 알고리즘은 시간 초과가 걸림
// 제곱근을 이용하여 문제 풀기!: 
// 어떤 자연수 n이 소수가 아니라면 n은 p * q의 형태로 나타낼 수 있다. 
// 이때 p와 q 중 하나는 반드시 sqrt(n)(제곱근) 이하의 값을 가지고, 다른 하나는 sqrt(n) 이상의 값을 가진다.

long long multiple(long long n) {
  if (n == 0 || n == 1) return 2;	
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return multiple(n + 1);
  }
  return n;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, a;
  cin >> n;

  for (long long i = 0; i < n; i++) {
    cin >> a;
    long long ans = multiple(a);
    cout << ans << "\n";
  }

  return 0;
}
