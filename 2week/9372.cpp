#include <iostream>

using namespace std;

//MST(최소신장트리)이용
// 모든 노드를 방문할 수 있는 경로가 존재하므로 N-1개인 경우가 최소!
// N-1을 출력하는 것..!

int main() {
	int t, n, m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int j = 0; j < m; j++)
		{
			int a, b;
			cin >> a>> b;
		}
		cout << n - 1 << "\n";
	}
	return 0;
}

