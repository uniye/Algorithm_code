#include <iostream>

using namespace std;

int Sum(int n) {
	int result = n;
	while (n > 0) {
		result = result + n % 10;
		n = n / 10;
	}
	return result;
}

int main() {
	int data[10001] = { 0, };
	int temp;
	for (int i = 0; i < 10001; i++)
	{
		temp = Sum(i);
		if (temp < 10001) {
			data[temp] = 1;
		}
	}
	for (int i = 0; i < 10001; i++)
	{
		if (data[i] != 1)
		{
			cout << i << "\n";
		}
	}
	return 0;
}

