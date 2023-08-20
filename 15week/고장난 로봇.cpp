#include<iostream>

using namespace std;

bool bGrid[100][100] = { false };
int iVX[] = { 1,-1,0,0 };
int iVY[] = { 0,0,1,-1 };
double dProb[4];

class CrazyBot
{
public:
    double getProbability(int _iN, int _iEast, int _iWest, int _iSouth, int _iNorth)
    {
        dProb[0] = _iEast / 100.0;
        dProb[1] = _iWest / 100.0;
        dProb[2] = _iSouth / 100.0;
        dProb[3] = _iNorth / 100.0;
        return dfs(50, 50, _iN);
    }
    double dfs(int _iX, int _iY, int _iN)
    {
        if (bGrid[_iX][_iY]) return 0;
        if (0 == _iN) return 1;
        bGrid[_iX][_iY] = true;
        double ret = 0;
        for (int i = 0; i < 4; i++)
        {
            ret += dfs(_iX + iVX[i], _iY + iVY[i], _iN - 1) * dProb[i];
        }
        bGrid[_iX][_iY] = false;
        return ret;
    }
};



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    double dResult(0.0);
    int iN(2), iEast(25), iWest(25), iSouth(25), iNorth(25);
    CrazyBot bot1;
    dResult = bot1.getProbability(iN, iEast, iWest, iSouth, iNorth);
    cout << dResult;

    return 0;
}

