#include <iostream>
#include <queue>
#include <vector>

using namespace std;

/*
일단 문제 해석
: N이 8이고 K가 4면
일단 큐 안에 들어갈 것은 [1,2,3,4,5,6,7,8]다.
k가 4이므로 처음 회차에선 4번째에 있는 4가 선택되고, 
2회차에선 그 다음 4번째에 있는 8이 선택된다.
다음으론 1이된다.
그림으로 표현하자면 이렇다. 
[ 1, 2, 3, 4, 5, 6, 7, 8 ] V=k번째해당숫자
  1  2  3  V  1  2  3  V   => <4,8>
[ 1, 2, 3, 5, 6, 7 ]
  1  2  3  V  1  2		   => <4,8,5>
[ 1, 2, 3, 6, 7]
  3  V  1  2  3			   => <4,8,5,2>
[ 1, 3, 6, 7 ]
  V  1  2  3			   => <4,8,5,2,1>
[ 3, 6, 7 ]
  V  1  2				   => <4,8,5,2,1,3>
[ 6, 7 ]
  3  V					   => <4,8,5,2,1,3,7,6>
그렇게 반복하면 <4, 8, 5, 2, 1, 3, 7, 6>순으로 순열이 완성되는 것이다. 
*/
/*
이를 활용하면 
k-1만큼의 앞 숫자를 뒤로 붙이고 
k번째의 숫자를 백터에 넣고 큐에서는 제거한다.

*/
int main() {
	int n, k;
	cin >> n >> k;
	queue<int> s;
	vector<int> vec;
	bool an = true;
	for (int i = 1; i <= n; i++)
	{
		s.push(i); //큐에 숫자 넣기
	}
	while(an)
	{
		for (int i = 0; i < k-1; i++)
		{
			int f = s.front();
			s.push(f);
			s.pop();
		}
		vec.push_back(s.front());
		s.pop();
		if (s.empty()) {
			an = false;
		}
	}
	cout << "<";
	for (int i = 0; i < n; i++)
	{
		cout << vec[i];
		if (i != n-1) cout << ", ";
	}
	cout << ">";
	return 0;
}
