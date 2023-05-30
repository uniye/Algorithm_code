#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int king =1, queen=1, rook=2, bishop=2, knight=2, pawn=8;
	int ki, qu, ro, bi, kn, pa;
	cin >> ki >> qu >> ro >> bi >> kn >> pa;
	cout << king - ki << " " << queen - qu << " "<< rook - ro << " "
		<< bishop - bi << " "<< knight - kn << " "<< pawn - pa << " ";

	return 0;
}

