#include<iostream>
#include<cmath>

using namespace std;

//문제 이해가 관건인...

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int arr[10] = { 0 };
	int sum = 0;

	for (int i = 0; i < 10; i++) 
		cin >> arr[i];

	for (int i = 0; i < 10; i++) {
		if (abs(100 - sum) >= abs(100 - (sum + arr[i])))
			sum += arr[i];
		else
			break;
	}
	cout << sum << endl;
	return 0;
}

