#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> vec = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };
vector<string> nu = {" ","0","00","000","0000","00000","000000","0000000","00000000","000000000"};

int main() {
	string result;
	for (int i = 0; i < 3; i++)
	{
		string n;
		cin >> n;
		if (i != 2) result += to_string(find(vec.begin(), vec.end(), n) - vec.begin());
		else result += nu[find(vec.begin(), vec.end(), n) - vec.begin()];
		
	}
	long long num = stoi(result);
	cout << result;
	return 0;
} //망한 코드...