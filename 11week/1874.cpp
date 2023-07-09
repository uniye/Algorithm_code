#include <iostream>
#include <stack>
#include <vector>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int cnt = 1;
	int n;
	cin >> n;

	vector<char> result;
	stack<int> s; 

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;

		while (cnt <= x)
		{
			s.push(cnt);
			cnt += 1;
			result.emplace_back('+');
		}

		if (s.top() == x)
		{
			s.pop();
			result.emplace_back('-');
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << '\n';
	}
}
