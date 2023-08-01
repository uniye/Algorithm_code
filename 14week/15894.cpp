#include<iostream>

using namespace std;

//범위를 잘 보자!^^


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long iFirst(4), iInputN(0), iTolerance(4), iResult(0);
    
    cin >> iInputN;
    
    iResult = iFirst + (iInputN - 1) * iTolerance;

    cout << iResult;


    return 0;
}

