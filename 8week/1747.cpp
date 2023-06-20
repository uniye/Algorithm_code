#include <iostream>
#include <string>
using namespace std;

//에라토스테네스의 체 + 펠린드롬
//어려운점: vector를 사용했을 경우 프로그램 자체가 돌아가지 않음.

long long N;
bool isPrime[10000100];

void init() { //배열의 초기화의 경우 이렇게 해줘야함
	for (int i = 1; i <= 10000000; i++) {
		isPrime[i] = true;
	}
}

void findPrime() {
	isPrime[1] = false;
	for (int i = 2; i <= 10000000; i++) {
		if (isPrime[i] == true) {
			for (int j = 2; i * j <= 10000000; j++) {
				isPrime[i * j] = false;
			}
		}
	}
}

bool isPalindrome(int n) {
	string s = to_string(n);

	int length = s.size();
	int mid = length / 2;
	for (int i = 0; i < mid; i++) {
		if (s[i] != s[length - i - 1]) return false;
	}
	return true;
}

int main() {
	init();
	findPrime();

	cin >> N;

	for (int i = N; ; i++) {
		if (isPrime[i]) {
			if (isPalindrome(i)) {
				cout << i;
				break;
			}
		}
	}

	return 0;
}

