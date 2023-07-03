#include<iostream>
#include<string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string A, B;
  int Aa, Bb;
  char tmp;
  cin >> A >> B;

  tmp = A[0];
  A[0] = A[A.size() - 1];
  A[A.size() - 1] = tmp;

  tmp = B[0];
  B[0] = B[B.size() - 1];
  B[B.size() - 1] = tmp;

  Aa = stoi(A);
  Bb = stoi(B);

  if (Aa < Bb) cout << Bb;
  else cout << Aa;

  return 0;
}
