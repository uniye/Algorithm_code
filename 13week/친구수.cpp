#include<iostream>
#include<vector>
#include<string>

using namespace std;

// 플로이드 와샬.... 실패~~~~ 이유는 나중에 분석하도록 하자....

class FriendScore {
public:
    int highestScore(vector<string> friends)
    {
        int iAns(0);
        int Arr[54][54];
        fill(&Arr[0][0], &Arr[0][0] + 54 * 54, 1000);
        for (int i = 1; i <= friends.size(); i++) {
            for (int j = 1; j < friends[0].size(); j++)

            {
                if (friends[i - 1][j-1] == 'Y') 
                    Arr[i][j] = 1;
            }
            
        }


        for (int k = 1; k <= friends.size(); k++) {
            for (int i = 1; i <= friends.size(); i++) {
                for (int j = 1; j <= friends.size(); j++) {
                    Arr[i][j] = min(Arr[i][j], Arr[i][k] + Arr[k][j]);
                }
            }
        }
        for (int i = 1; i <= friends.size(); i++) {
            int iCnt = 0;
            for (int j = 1; j <= friends.size(); j++) {
                if (i == j) continue;
                if (Arr[i][j] == 1 || Arr[i][j] == 2)
                    iCnt++;
            }
            iAns = max(iAns, iCnt);
        }

        return iAns;
    }
};



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> vsFriends = { "NYNNN","YNYNN","NYNYN","NNYNY","NNNYN" };
    /*
    { "NYY","YNY","YYN" };
    { "NYNNN","YNYNN","NYNYN","NNYNY","NNNYN" }; 
    "NNNNYNNNNN",
                                 "NNNNYNYYNN",
                                 "NNNYYYNNNN",
                                 "NNYNNNNNNN",
                                 "YYYNNNNNNY",
                                 "NNYNNNNNYN",
                                 "NYNNNNNYNN",
                                 "NYNNNNYNNN",
                                 "NNNNNYNNNN",
                                 "NNNNYNNNNN",*/
    FriendScore F;

    int iResult = F.highestScore(vsFriends);
    cout << iResult;

    return 0;
}

