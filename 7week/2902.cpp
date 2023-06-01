#include <iostream>
#include <string>
using namespace std;

//아스키코드를 이용하여 대문자만 추출

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
	string name, KMP;
	cin >> name;
	for (int i = 0; i < name.size(); i++)
	{
		if (65 <= int(name[i]) && int(name[i]) <= 90) KMP.push_back(name[i]);
	}
	cout << KMP;
	return 0;
}

