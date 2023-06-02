#include <iostream>

using namespace std;

//그리디 느낌 - 막대기 문제랑 비슷
//1. 5kg 봉투로 일단 몇 개 나오는지
//2-1. 뺀 나머지를 3kg 봉투로 묶었을 때 나머지가 0이면 
//     3kg 봉투 개수 측정
//2-2. 나머지가 0이 아니면 5kg봉투에서 하나 빼서 5kg을 
//     추가한 나머지로 다시 3kg으로 나눠 봄
//3. 안되면 반복.


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int N, N1, N2;
	cin >> N;
	N1 = N / 5;
	while (true) {
		if (N1 < 0) {
			cout << "-1";
			return 0;
		}
		if ((N - (5 * N1)) % 3 == 0) {
			N2 = (N - (5 * N1)) / 3;
			break;
		}
		N1--;
	}
	cout << N1 + N2;
	return 0;
}

