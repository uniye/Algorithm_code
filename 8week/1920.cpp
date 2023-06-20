#include<iostream>
//#include<vector>
#include<algorithm>

using namespace std;

//이분탐색 이용을 권장

int n, m;
int arr[1000000];

void bs(int x) {
	int left = 0, mid = 0, right = n - 1;
	while (left <= right) {
		mid = (left + right) / 2;

		if (arr[mid] == x) {
			cout << 1 << "\n";
			return;
		}
		else if (arr[mid] > x) right = mid - 1;
		else left = mid + 1;
	}
	cout << 0 << "\n";
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n); //이분탐색을 하기 위해 오름차순

	cin >> m;
	int num;
	while(m--) {
		cin >> num;
		bs(num);
	}

	return 0;
}





////시간초과 - find, vector
//vector<int> n;
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N,N1,M,M1;
//
//	cin >> N;
//	while (N--) {
//		cin >> N1;
//		n.push_back(N1);
//	}
//
//	cin >> M;
//	while (M--) {
//		cin >> M1;
//		if (n.end() != find(n.begin(), n.end(), M1)) cout << "1 \n";
//		else cout << "0 \n";
//	}
//
//	return 0;
//}

