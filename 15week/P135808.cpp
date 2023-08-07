#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int iResult = 0;
    sort(score.begin(), score.end(), greater<>());
    for (int i = 0; i < (score.size() / m); i++)
    {
        vector<int> vec(score.begin() + i * m, score.begin() + (i + 1) * m);
        iResult += vec[vec.size() - 1] * m;
    }
    return iResult;
}

