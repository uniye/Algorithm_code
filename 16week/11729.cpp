#include<iostream>

using namespace std;

void hanoi(int _iN, int _iStart, int _iTo, int _iPass);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int iNum;
    cin >> iNum;
    cout << (1 << iNum) - 1 << "\n";
    hanoi(iNum, 1, 3, 2);
    return 0;
}

void hanoi(int _iN, int _iStart, int _iTo, int _iPass)
{
    if (_iN == 1)
        cout << _iStart << ' ' << _iTo << '\n';
    else
    {
        hanoi(_iN - 1, _iStart, _iPass, _iTo);
        cout << _iStart << ' ' << _iTo << '\n';
        hanoi(_iN - 1, _iPass, _iTo, _iStart);
    }
}

