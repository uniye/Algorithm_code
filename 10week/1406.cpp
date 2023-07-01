#include<iostream>
#include<string>
#include <list>

using namespace std;

// 처음에 원초적인 방법으로 풀었는데 시간 초과
// 연결리스트로 풂.

list<char> l;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) 
	{
		l.push_back(s[i]);
	}

	int M;
	list<char>::iterator cur = l.end();
	cin >> M;

	for (int i = 0; i < M; i++) 
	{
		char c;
		cin >> c;

		if (c == 'L') {
			if (cur != l.begin()) cur--;
		}
		else if (c == 'D') {
			if (cur != l.end()) cur++;
		}
		else if (c == 'B') {
			if (cur != l.begin())
				cur = l.erase(--cur);
		}
		else if (c == 'P') {
			char s;
			cin >> s;
			l.insert(cur, s);
		}

	}

	for (list<char>::iterator it = l.begin(); it != l.end(); it++) {
		cout << *it;
	}

	return 0;
}







//
//int main() {
//  ios_base::sync_with_stdio(false);
//  cin.tie(nullptr);
//  
//  int M;
//  string s, cmd, plus;
//  cin >> s;
//  cin >> M;
//  int cu = s.size();//커서 위치
//
//  for (int i = 0; i < M; i++)
//  {
//    cin >> cmd;
//    if (cmd == "L") {
//      if (cu==0) continue;
//      cu --;
//    }
//    else if (cmd == "D") {
//      if (cu == s.size()) continue;
//      cu ++;
//    }
//    else if (cmd == "B") {
//      if (cu == 0) continue;
//      cu--;
//      s.erase(s.begin() + cu);
//    }
//    else if (cmd == "P") {
//      cin >> plus;
//      if (i==0) {
//        cu = s.size();
//        s.insert(cu, plus);
//        cu ++;
//        continue;
//      }
//      s.insert(cu, plus);
//      cu ++;
//    }
//  }
//  cout << s;
//
//  return 0;
//}
