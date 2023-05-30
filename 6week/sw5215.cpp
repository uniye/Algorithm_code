#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//dfs 이용 
vector<int> vec1;//재료에 대한 맛 저장
vector<int> vec2;//재료칼로리 저장
int result;

void dfs(int N, int L, int count, int sumScore, int allCal) {
	if (allCal > L) {
		return;
	}
	/* N개의 재료까지 뽑았을경우 -> 최대 점수 비교*/
	if (count == N) {
		result = max(result, sumScore);
		return;
	}
	/* 재귀호출(dfs): 재료수+1, 점수, 칼로리 합  */
	dfs(N, L, count + 1, sumScore + vec1[count], allCal + vec2[count]);

	/* 재료 빼기 */
	dfs(N, L, count + 1, sumScore, allCal);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int T, N, L; //테스트케이스,재료수,제한칼로리
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		cin >> N >> L;
		int Ti, Ki;
		for (int j = 0; j < N; j++) {
			cin >> Ti >> Ki;
			vec1.push_back(Ti);
			vec2.push_back(Ki);
		}
		dfs(N, L, 0, 0, 0);
		cout << "#" << i << " " << result << "\n";
	}
	return 0;
}


