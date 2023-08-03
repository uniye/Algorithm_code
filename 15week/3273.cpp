#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int iN(0), iInput(0), iTarget(0), iCnt(0);
    cin >> iN;
    for (int i = 0; i < iN; i++)
    {
        cin >> iInput;
        vec.emplace_back(iInput);
    }
    cin >> iTarget;
    sort(vec.begin(), vec.end());
    int iLeft(0), iRight(iN - 1);
    while (true)
    {
        if (iLeft >= iRight)
            break;
        if (iTarget == (vec[iLeft] + vec[iRight]))
        {
            iCnt++;
            iLeft++;
            iRight--;
        }
        else if (iTarget > (vec[iLeft] + vec[iRight]))
            iLeft++;
        else 
            iRight--;
    }
    cout << iCnt;

    return 0;
}



