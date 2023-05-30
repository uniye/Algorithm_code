#include <iostream>
#include <string>

using namespace std;

//첫글자와 마지막글자를 출력하면 끝~
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		if (s.length() == 1) cout << s[0] << s[0] << "\n";
		else cout << s[0] << s[s.length()-1] << "\n";
	}
	return 0;
}