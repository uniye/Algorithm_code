#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string a,re;
	cin >> a;
	re = a;
	reverse(re.begin(), re.end());
	if (a == re) cout << "1";
	else cout << "0";
	return 0;
}

