#include <iostream>

using namespace std;
int Max = 10000001;

//규칙발견이 관건이었다
//규칙 설명은 1193.md을 참고!

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int X, a = 1;
	cin >> X;
	for (int i = 1; i < Max; i++)
	{
		if (X >= a && X < a + i) {
			if (i % 2 == 0) {
				int tmp = X - a;
				cout << tmp + 1 << "/" << i - tmp;
				return 0;
			}
			else {
				int tmp = X - a;
				cout << i - tmp << "/" << tmp + 1;
				return 0;
			}
		}
		a += i;
	}
	return 0;
}

