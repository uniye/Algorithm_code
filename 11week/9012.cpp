#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		string an = "YES";
		stack<char> s1;
		string input;
		cin >> input;
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == '(') {
				s1.push(input[i]);
			}
			else if (!s1.empty() && input[i] == ')' && s1.top() == '(') {
				s1.pop();
			}
			else {
				an = "NO";
			}

		}
		if (!s1.empty()) {
			an = "NO";
		}

		cout << an << "\n";
	}

	return 0;
}
