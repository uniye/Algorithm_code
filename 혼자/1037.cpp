#include<iostream>
#include <climits>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t,tmp, max=0, min=INT_MAX;
	cin >> t;
	while (t--) {
		cin >> tmp;
		if (min > tmp)min = tmp;
		if (max < tmp)max = tmp;
	}
	cout << max * min;

	return 0;
}