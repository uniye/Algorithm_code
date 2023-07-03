#include<iostream>

using namespace std;

// 최대 공약수를 구한 다음
// 최소공배수 = a * b / 최대공약수

// 유클리드 호제법이란? (2개의 자연수의 최대공약수 구함)
// 비교대상의 두 개의 자연수 a와 b에서(단 a>b) 
// a를 b로 나눈 나머지를 r이라고 했을때 
// GCD(a, b) = GCD(b, r)과 같고 "r이 0이면 그때 b가 최대공약수이다."라는 원리를 활용한 알고리즘


int gcd(int a, int b) {//유클리드 호제법 사용
  int r = a % b;
  if (r == 0) {
    return b;
  }
  else{
    return gcd(b,r);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;        
  int A, B;
  int lcd; // 최소공배수

  cin >> T;
  for (int i = 0; i < T; i++) {
    cin >> A >> B;

    lcd = (A * B) / (gcd(A, B));
    cout << lcd << "\n";
  }

  return 0;
}
