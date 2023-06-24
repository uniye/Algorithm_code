#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<string> vec(15,""); //배열 초기화 중요

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int N = 5;
  string s;
  for (int i = 0; i < N; i++)
  {
    cin >> s;
    for (int j = 0; j < s.length(); j++)
    {
      vec[j] += s[j];
    }
  }
  
  for (int i = 0; i < vec.size(); i++)
  {
    cout << vec[i];
  }


  return 0;
}
