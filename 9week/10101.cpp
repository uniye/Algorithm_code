#include<iostream>
#include<vector>
using namespace std;

vector<int> vec;

//주의점: vec을 초기화하면 while말고 for문+vec[i]을 사용해야한다.

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int cnt = 3;

  while (cnt--) {
    int dgree;
    cin >> dgree;
    vec.push_back(dgree);
  }
  
  int sum = vec[0] + vec[1] + vec[2];
  if (vec[0] == 60 && vec[1]==60 && vec[2]==60) cout << "Equilateral";
  else if (sum != 180) cout << "Error";
  else if (vec[0] == vec[1] || vec[1] == vec[2] || vec[0] == vec[2]) cout << "Isosceles";
  else cout << "Scalene";
  
  return 0;
}
