#include<iostream>
#include<string>
#include<map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int>& a, pair<string, int>& b);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int iN(0), iM(0);
    string st;
    map<string, int> m1;

    cin >> iN >> iM;

    for (int i = 0; i < iN; i++)
    {
        cin >> st;
        if (st.size() >= iM)
            m1[st]++;
    }

    vector<pair<string, int>> vec(m1.begin(), m1.end());
    sort(vec.begin(), vec.end(), cmp);

    for (auto p : vec)
        cout << p.first << "\n";

    return 0;
}

bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    if (a.second == b.second)
    {
        if (a.first.length() == b.first.length())
            return a.first < b.first;
        return a.first.length() > b.first.length();
    }
    else return a.second > b.second;
}


