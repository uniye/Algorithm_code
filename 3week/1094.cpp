#include <iostream>

using namespace std;

 //어려웠던 점: mak대기의 길이를 변화시킬때 mak+half를 한것을 나누고 그러면 안됌
 
int main() {
	int x;
	cin >> x;
	int mak = 64;
	int half = 64;
	int cnt=1;
	while (mak != x) {
		half = half / 2;
		if (mak == 64) mak = mak / 2;
		if(x > mak + half) {
			mak = mak + half;
			++cnt;
		}
		else if (mak+half == x) {
			++cnt;
			break;
		}
		else {
			if (x < mak) {
				mak = half;
			}
		}
	}
	cout << cnt;
	return 0;
}
 
