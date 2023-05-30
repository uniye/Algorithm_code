#include <iostream>

using namespace std;

//어려웠던 점: 순간 무슨말인지 이해가 안됌 1~N까지의 수열중에 등차수열을 구하라는 미친 문제인 줄알았다.
// 258의 경우 공차가 3인 등차 수열이 되므로 한수가 됌!
// 공차의 확인: 100의 자리와 10의 자리수를 뺀값과 10자리와 1의 자리를 뺀값이 같아야함

int main() {
	int n;
	cin >> n;
	int cnt = 0; // 한수

	if (n < 100) {
		cout << n;
	}
	else {
		cnt = 99;

		for (int i = 100; i <= n; i++) {
			int N100 = i / 100;		 
			int N10 = (i / 10) % 10; 
			int N1 = i % 10;

			if ((N100 - N10) == (N10 - N1)) { 
				cnt++;
			}
		}
		cout << cnt;
	}
	return 0;
}


