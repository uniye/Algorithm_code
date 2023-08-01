#include<iostream>
#include<algorithm>
using namespace std;

// 쓰레기값 처리x
int chess[51][51];

//black = 0
//white = 1


int check(int _iX, int _iY)
{
	int iCnt1 = 0;
	int iCnt2 = 0;

	for (int i = _iX; i < _iX + 8; i++) {
		for (int j = _iY; j < _iY + 8; j++) {
			// 탐색을 시작하는 첫번째 블록이 흰색 일때
			if ((i + j) % 2 == chess[i][j]) iCnt1++; 
			// 탐색을 시작하는 첫번째 블록이 검정색 일때
			if ((i + j + 1) % 2 == chess[i][j]) iCnt2++; 
		}
	}
	// 둘 중 최소값 반환
	return min(iCnt1, iCnt2); 
}

int main()
{
	int iN, iM, iResult;
	int iMin = 999999;
	char cBW;

	cin >> iN >> iM;

	for (int i = 0; i < iN; i++) { 
		for (int j = 0; j < iM; j++) {
			cin >> cBW;
			if (cBW == 'B') chess[i][j] = 0;
			else chess[i][j] = 1;
		}
	}

	// check(x, y)함수에 탐색을 시작할 인덱스 전달
	for (int i = 0; i <= iN - 8; i++) { 
		for (int j = 0; j <= iM - 8; j++) {
			iResult = check(i, j);
			if (iMin > iResult) iMin = iResult;
		}
	}

	cout << iMin;
}


