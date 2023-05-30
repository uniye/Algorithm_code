#include <iostream>
#include <algorithm>

using namespace std;

//최솟값: 개미가 왼쪽으로 오른쪽으로 가는 것 중 가장 짧은 거리(거리 = 시간, 1cm/s이므로)
//최대값: 개미가 왼쪽으로 오른쪽으로 가는 것 중 가장 짧은 거리

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int l, n; //막대길이, 개미수
		cin >> l >> n;
		int min_T = 0, max_T = 0;
		for (int j = 0; j < n; j++)
		{
			int i_a;//개미 초기값
			cin >> i_a;
			int a_Min = min(i_a, l - i_a); //왼쪽, 오른쪽 중 최소
			int a_Max = max(i_a,l - i_a); //왼쪽, 오른쪽 중 최대

			min_T = max(min_T, a_Min); //위에서 고른 것과 원래 저장된 값 중 최소 	
			max_T = max(max_T, a_Max); //위에서 고른 것과 원래 저장된 값 중 최대
		}
		cout << min_T << " " << max_T << "\n";
	}
	return 0;
}


