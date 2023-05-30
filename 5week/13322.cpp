#include <iostream>

using namespace std;

//접두사 배열은 처음 만들어진 순서와 일치한다.
//happy의 경우 h, ha, hap, happ, happy와 같다.
//끝의 인덱스는 n(길이)-1이다,
//규칙만 찾으면 쉽게 풀 수 있다.

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string word;
	cin >> word;
	for (int i = 0; i < word.length(); i++)
	{
		cout << i << "\n";
	}
	return 0;
}