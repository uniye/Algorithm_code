#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//이분탐색 - algorithm 사용, vector 사용

int n, m;
vector<int> vec;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	int a=0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		vec.push_back(a);
	}
	sort(vec.begin(),vec.end()); //이분탐색을 하기 위해 오름차순

	cin >> m;
	int num;
	while(m--) {
		cin >> num;
		if (binary_search(vec.begin(), vec.end(), num)) cout << 1 << "\n";
		else cout << 0 << "\n";
	}

	return 0;
}




