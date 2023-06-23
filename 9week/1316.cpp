#include<iostream>
#include<vector>
#include<string>

using namespace std;

//아스키코드 이용
//예전에 한 것도 첨부(bool을 이용하여)

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  int cnt = 0;
  string s;
  while (N--) {
    cin >> s;
    vector<int> vec(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
      if (vec[(int)s[i] - 97] == 0) vec[(int)s[i] - 97]++; //방문 안함
      else if (s[i] != s[i - 1]) break; //방문했었는데 그전의 char과 다름
      if(i==s.length()-1) cnt++; //break되지 않은 것들은 그룹단어
    }
  }
  cout << cnt;

  return 0;
}

