#include<iostream>
#include<string>
using namespace std;

int LCM(int _iA, int _iB);
int GCD(int _iA, int _iB);

int main(int argc, char** argv)
{
    int test_case;
    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case)
    {
        string sS = "", sT = "", sIS = "", sIT = "";
        cin >> sS >> sT;
        cout << '#' << test_case << ' ';
        int iTemp = LCM(sS.size(), sT.size());
        for (int i = 0; i < iTemp / sS.size(); i++)
            sIS += sS;
        for (int i = 0; i < iTemp / sT.size(); i++)
            sIT += sT;
        if (sIS == sIT)
        {
            cout << "yes" << '\n';
        }
        else
        {
            cout << "no" << '\n';
        }
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

int LCM(int _iA, int _iB)
{
    return _iA * _iB / GCD(_iA, _iB);
}
int GCD(int _iA, int _iB)
{
    if (_iB == 0)
    {
        return _iA;
    }
    else
    {
        return GCD(_iB, _iA % _iB);
    }
}

