#include <iostream>

using namespace std;

int main() {
	char room[101][101];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> room[i][j];
		}
	}

	int g = 0;
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		for (int j = 0; j < n; j++)
		{
			if (room[i][j]=='.') {
				cnt++;
			}
			else {
				if (cnt > 1)
					g++;
				cnt = 0;
			}
			if (j==n-1 && cnt > 1)
				g++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		for (int j = 0; j < n; j++)
		{
			if (room[j][i] == '.') {
				cnt++;
			}
			else {
				if (cnt > 1)
					s++;
				cnt = 0;
			}
			if (j == n - 1 && cnt > 1)
				s++;
		}
	}
	cout << g << " " << s;
	return 0;
}



/*
.을 만나면 cnt++을 해주고,
x를 만나고 cnt 값이 1이 넘으면 가로++를 해주는데 cnt를 0으로 바꿔준다. 
이렇게만 하면 .....인 경우나 x.....인 경우의 수를 세지 않으므로
if(j가 끝이고 cnt가 1 초과인 경우)에 대해 조건을 당ㄹ아 경우의 수를 구해주어야한다.


*/


