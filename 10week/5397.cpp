#include<iostream>
#include<list>

using namespace std;

// 1406번과 같은 느낌. 
// 근데 테스트케이스를 곁들인..
list<char> l;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int tc;
  string s;
  cin >> tc;

  while (tc--) {
    l.clear();
    list<char>::iterator cur;
    cin >> s;
    cur = l.begin();
    
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '<') {
        if (cur != l.begin()) cur--;
      }
      else if (s[i] == '>') {
        if (cur != l.end()) cur++;
      }
      else if (s[i] == '-') {
        if (cur != l.begin()) cur = l.erase(--cur);
      }
      else l.insert(cur, s[i]);
    }
    for (list<char>::iterator it = l.begin(); it != l.end(); it++) {
      cout << *it;
    }
    cout << '\n';
  }


  return 0;
}
