#include <iostream>

using namespace std;

int main() {
	double A, B;
	cin >> A >> B;
	cout.precision(10); 
	//상대오차가 10^-9이내여야 한다는 단서가 있으므로 
	//소수점 아래 11자리에서 반올림하여 10자리까지 표현할 수 있도록
	cout << A / B;
	return 0;
}