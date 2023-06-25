#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<string> croatia = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  int result;
  cin >> s;

  for (int i = 0; i < croatia.size(); i++) {
    while (true) {
      int index = s.find(croatia[i]);
      if (index == string::npos) { //없는 경우
        break;
      }
      s.replace(index, croatia[i].length(), "!"); //크로아티아 문자 차례대로 없애버리기
    }
  }
  result = s.length();
  cout << result << "\n";
  return 0;
}
