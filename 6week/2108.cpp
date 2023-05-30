#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
//산술평균: 보통 우리가 생각하는 평균
//중앙값: 중앙 인덱스
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int N,mean=0,mode=0,tmp,max=0,min;
	cin >> N;
	vector<int> vec(N);
	vector<int> vec2(8001, 0);
	bool isSecond = false;
	for (int i = 0; i < N; i++)
	{
		cin >> vec[i];
		mean += vec[i];
		tmp = (vec[i] <= 0) ? abs(vec[i]): vec[i]+4000;
		vec2[tmp]++;
		if (vec2[tmp] > max) max = vec2[tmp];
	}
	sort(vec.begin(), vec.end());
	//최빈값
	for (int i = -4000; i < 4001; i++) {
		tmp = i <= 0 ? abs(i) : i + 4000;
		if (vec2[tmp] == max) {
			mode = i;
			if (isSecond)
				break;
			isSecond = true;
		}
	}
	int result1 = round(mean / (double)N);
	cout << result1 << '\n'; //그냥 쓰면 -0나옴
	cout << vec[round(N / 2)] << '\n';
	cout << mode << '\n';
	min = vec[0];
	max = vec[vec.size() - 1];
	cout << max - min << '\n';
	return 0;
}

