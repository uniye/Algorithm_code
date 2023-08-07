#include<iostream>

using namespace std;

int iArr[1000001], iN;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int iMax = 0;
		long long llSum = 0;

		cin >> iN;
		for (int i = 1; i <= iN; i++) {
			cin >> iArr[i];
		}

		iMax = iArr[iN];

		for (int i = iN - 1; i > 0; i--) {
			if (iMax < iArr[i]) {
				iMax = iArr[i];
			}
			else {
				llSum += iMax - iArr[i];
			}
		}

		cout << "#" << test_case << " " << llSum << '\n';


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
