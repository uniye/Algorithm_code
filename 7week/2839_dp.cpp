#include <iostream>

using namespace std;

//다이나믹 프로그래밍
//모든 경우를 d에 저장
//어떤 느낌으로 풀었는지 2939.md 참고!

int d[5001];

int dp(int x) {
	if (x < 0) return 9999;
	if (x == 3 || x == 5) return 1;

	if (d[x] != 0) return d[x];
	return d[x] = min(dp(x - 3) + 1, dp(x - 5) + 1); //과정마다 1씩 더해줌
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	d[3] = 1;
	d[5] = 1;
	int N;
	cin >> N;
	dp(N);
	if (d[N] >= 10000) cout << "-1";
	else cout << d[N];
	return 0;
}

