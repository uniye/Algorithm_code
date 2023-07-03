#include<iostream>

using namespace std;

// 1934번 문제랑 완전 똑같은 방식으로 대신 
// test케이스가 없고 long long을 써야할 정도로 숫자가 크다.

long long gcd(long long a, long long b) {
  long long r = a % b;
  if (r == 0) return b;
  else return gcd(b,r);
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long A, B, ICD;
  cin >> A >> B;

  ICD = A * B / (gcd(A, B));
  cout << ICD;
  return 0;
}
