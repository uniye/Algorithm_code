#include<iostream>
#include<string>
#include<vector>

using namespace std;

//아스키코드 이용~

vector<int> num(26, 0);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{   
		num[(int)s[i] - 97]++;
	}
	for (int i = 0; i < num.size(); i++)
	{
		cout << num[i] << ' ';
	}
	return 0;
}
