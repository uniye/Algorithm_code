#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, iN;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int iArr[11][11] = { 0, };
		int iRow = 0, iCol = -1;
		int iK(1), iDir(1), iNum(0);
		cin >> iN;
		iNum = iN;

		while (iN > 0)
		{
			for (int i = 0; i < iN; i++)
			{
				iCol += iDir;
				iArr[iRow][iCol] = iK;

				iK++;
			}

			iN--;

			for (int j = 0; j < iN; j++)
			{
				iRow += iDir;
				iArr[iRow][iCol] = iK;

				iK++;
			}

			iDir *= -1;
		}

		cout << "#" << test_case << endl;

		for (int i = 0; i < iNum; i++) {
			for (int j = 0; j < iNum; j++) {
				cout << iArr[i][j] << " ";
			}
			cout << endl;

		}



	}
	return 0;
}


