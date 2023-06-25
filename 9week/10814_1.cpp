#include <iostream>
#include <vector>

using namespace std;

// 구현 완료! vector속 vector 이용! 
// emplace_back과 push_back의 차이에 대해서도 10814.md에 작성해 두도록 하겠다.
// 훨씬 단축된 시간과 메모리!


vector<vector<string>> vec(201);

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(nullptr);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		string name;

		cin >> num >> name;

		vec[num].emplace_back(name);
	}

	for (int i = 0; i < 201; i++)
	{
		for (int j = 0; j < vec[i].size(); j++)
		{
			cout << i << " " << vec[i][j] << "\n";
		}
	}

	return 0;
}
