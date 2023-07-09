#include <iostream>

using namespace std;

long long GCD(long long a, long long b){ //최대공약수 이용.(Greatest Common Divisor)
	if (a < b) return GCD(a, b % a);
	if (b == 0) return a;
	return GCD(b, a % b);
}

int main() {
	int n;
	cin >> n;
	long long a, b;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		cout << (a / GCD(a, b)) * (b / GCD(a, b)) * GCD(a, b) << '\n';
	}
	return 0;
}
 //LCM(lowest Common Multiple) 문제
