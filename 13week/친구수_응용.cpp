#include<iostream>
#include<vector>
#include<string>

using namespace std;


class FriendScore {
public:
    int highestScore(vector<string> friends)
    {
        int iAns(0);
        for (int i = 0; i < friends[0].length(); i++)
        {
            int iCount(0);
            for (int j = 0; j < friends[0].length(); j++)
            {
                if (i == j)
                    continue;
                if (friends[i][j] == 'Y')
                    ++iCount;
                else
                {
                    for (int k = 0; k < friends[0].length(); k++)
                    {
                        ++iCount;
                        break;
                    }
                }
            }
            iAns = max(iAns, iCount);
        }

        return iAns;
    }
};



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> vsFriends = { "NNNNYNNNNN",
                                 "NNNNYNYYNN",
                                 "NNNYYYNNNN",
                                 "NNYNNNNNNN",
                                 "YYYNNNNNNY",
                                 "NNYNNNNNYN",
                                 "NYNNNNNYNN",
                                 "NYNNNNYNNN",
                                 "NNNNNYNNNN",
                                 "NNNNYNNNNN",};
    FriendScore F;

    int iResult = F.highestScore(vsFriends);
    cout << iResult;

    return 0;
}

