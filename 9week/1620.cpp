#include<iostream>
#include<map>
#include<string>

using namespace std;

// map을 이용
// 주의점: M부분에서 입력받은 값이 숫자인지 string인지 구분해야함

map<string, int> num;

string pokemon[100001];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N,M;
  string po;
  cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		cin >> po;
		num.insert({ po, i });
		pokemon[i] = po;
	}

	for (int i = 1; i <= M; i++) {
		cin >> po;
		if (isdigit(po[0])) {
			cout << pokemon[stoi(po)] << '\n';
		}
		else {
			cout << num.find(po)->second << '\n';
		}
	}

  return 0;
}
