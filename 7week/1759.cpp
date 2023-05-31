#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//사전식출력이니 받은 문자 일단 sort()로 정렬
//주의할 점:모음 1자 자음 2자

int L, C;
int c[16] = {0,};
vector<char> tmp;

void dfs(int cnt, int current) {

	if (cnt == L) {

		int m = 0, j = 0; //모음, 자음
		for (int i = 0; i < tmp.size(); i++) {
			if (c[i]) {
				if (tmp[i] == 'a' || tmp[i] == 'e' || tmp[i] == 'i' || tmp[i] == 'o' || tmp[i] == 'u')
					m++;
				else
					j++;
			}
		}
		if (m >= 1 && j >= 2) {
			for (int i = 0; i < tmp.size(); i++)
				if (c[i])
					cout << tmp[i];
			cout << "\n";
		}
		return;
	}


	for (int i = current; i < tmp.size(); i++) {
		if (c[i] == 0) {
			c[i] = 1;
			dfs(cnt + 1, i);
			c[i] = 0;
		}
	}
	return;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> L >> C;
	for (int i = 0; i < C; i++)
	{
		char a;
		cin >> a;
		tmp.push_back(a);
	}
	sort(tmp.begin(), tmp.end());
	dfs(0,0);
	return 0;
}